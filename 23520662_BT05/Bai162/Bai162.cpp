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
DATHUC Tich(DATHUC, DATHUC, int, int, int&);

int main()
{
	int i, j;
	DATHUC g, e, Tich1;
	cout << "Nhap so luong don thuc trong da thuc 1: ";
	cin >> i;
	Nhap(g, i);
	cout << "Nhap so luong don thuc trong da thuc 2: ";
	cin >> j;
	Nhap(e, j);
	cout << "\nDa thuc vua nhap: \n";
	Xuat(g, i);
	cout << endl;
	Xuat(e, j);
	int k = 0;
	Tich1 = Tich(g, e, i, j, k);
	cout << "\nTich da thuc la: ";
	Xuat(Tich1, k);
	cout << " = 0";
	return 0;
}

DATHUC Tich(DATHUC a, DATHUC b, int ii, int jj, int& k)
{
	DATHUC Tich;
	for (int i = 0; i < ii; i++)
	{
		for (int j = 0; j < jj; j++)
		{
			Tich.donthuc[k].a = a.donthuc[i].a * b.donthuc[j].a;
			Tich.donthuc[k].n = a.donthuc[i].n + b.donthuc[j].n;
			k++;
		}
	}
	Tich.soluong = k;
	return Tich;
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
