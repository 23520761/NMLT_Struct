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
DATHUC ThuongDu(DATHUC, DATHUC);

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
	Tong1 = ThuongDu(g, e);
	cout << "\nThuong lay du cua da thuc la: ";
	Xuat(Tong1, Tong1.soluong);
	return 1;
}

DATHUC ThuongDu(DATHUC a, DATHUC b)
{
	DATHUC Du = a;
	int i, j;

	while (Du.soluong >= b.soluong)
	{
		float heSo = Du.donthuc[0].a / b.donthuc[0].a;
		for (i = 0; i < b.soluong; i++)
			Du.donthuc[i].a -= heSo * b.donthuc[i].a;
		i = 0;
		while (i < Du.soluong && Du.donthuc[i].a == 0)
		{
			for (j = i; j < Du.soluong - 1; j++)
				Du.donthuc[j] = Du.donthuc[j + 1];
			Du.soluong--;
		}
	}
	return Du;
}

void Nhap(DATHUC& g, int n)
{
	g.soluong = n;
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
