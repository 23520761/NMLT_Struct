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
DATHUC Tong(DATHUC, DATHUC, int, int, int&);

int main()
{
	int i, j;
	DATHUC g, e, Tong1;
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
	Tong1 = Tong(g, e, i, j, k);
	cout << "\nTong da thuc la: ";
	Xuat(Tong1, k);
	return 1;
}

DATHUC Tong(DATHUC a, DATHUC b, int ii, int jj, int& k)
{
	DATHUC Tong;
	for (int i = 0; i < ii; i++)
	{
		Tong.donthuc[k] = a.donthuc[i];
		k++;
	}
	for (int j = 0; j < jj; j++)
	{
		int flag = 0;
		for (int i = 0; i < ii; i++)
		{
			if (b.donthuc[j].n == a.donthuc[i].n)
			{
				Tong.donthuc[i].a += b.donthuc[j].a;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
		{
			Tong.donthuc[k] = b.donthuc[j];
			k++;
		}
	}
	Tong.soluong = k;
	return Tong;
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
	cout << " = 0";
}
