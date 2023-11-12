#include <iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

struct DaThuc
{
	DONTHUC donthuc[500];
	int soluong;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&, int);
void Xuat(DATHUC, int);
DATHUC DaoHamCapK(DATHUC, int, int&);

int main()
{
	int i, k;
	DATHUC g, DaoHam;
	cout << "Nhap so luong don thuc trong da thuc: ";
	cin >> i;
	Nhap(g, i);
	cout << "Nhap cap dao ham k: ";
	cin >> k;
	int m = 0;
	DaoHam = DaoHamCapK(g, i, m);
	cout << "\nDao ham cap " << k << " cua da thuc la: ";
	Xuat(DaoHam, m);
	return 0;
}

DATHUC DaoHamCapK(DATHUC a, int ii, int& m)
{
	DATHUC DaoHam;
	for (int i = 0; i < ii; i++)
	{
		if (a.donthuc[i].n >= m)
		{
			DaoHam.donthuc[i].a = a.donthuc[i].a * a.donthuc[i].n;
			DaoHam.donthuc[i].n = a.donthuc[i].n - 1;
			m++;
		}
	}
	DaoHam.soluong = m;
	return DaoHam;
}

void Nhap(DATHUC& g, int n)
{
	g.soluong = n; // Set the number of elements in the array
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap don thuc so " << i + 1 << endl;
		cout << "Nhap he so: ";
		cin >> g.donthuc[i].a;
		cout << "Nhap so mu: ";
		cin >> g.donthuc[i].n;
		cout << endl;
	}
}

void Xuat(DATHUC g, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << g.donthuc[i].a << "x^" << g.donthuc[i].n;
		if (i < n - 1)
			cout << " + ";
	}
	cout << endl;
}
