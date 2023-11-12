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
DATHUC operator*(DATHUC, DATHUC);
void SapXep(DONTHUC[], int);

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
	Tich1 = g * e;
	cout << "\nTich cua 2 da thuc la: ";
	Xuat(Tich1, Tich1.soluong);
	return 1;
}

DATHUC operator*(DATHUC a, DATHUC b)
{
	DATHUC Tich;
	Tich.soluong = 0;

	for (int i = 0; i < a.soluong; i++)
	{
		for (int j = 0; j < b.soluong; j++)
		{
			Tich.donthuc[Tich.soluong].a = a.donthuc[i].a * b.donthuc[j].a;
			Tich.donthuc[Tich.soluong].n = a.donthuc[i].n + b.donthuc[j].n;
			Tich.soluong++;
		}
	}
	SapXep(Tich.donthuc, Tich.soluong);
	for (int i = 0; i < Tich.soluong - 1; i++)
	{
		if (Tich.donthuc[i].n == Tich.donthuc[i + 1].n)
		{
			Tich.donthuc[i].a += Tich.donthuc[i + 1].a;
			for (int j = i + 1; j < Tich.soluong - 1; j++)
			{
				Tich.donthuc[j] = Tich.donthuc[j + 1];
			}
			Tich.soluong--;
			i--;
		}
	}

	return Tich;
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
	cout << endl;
}

void SapXep(DONTHUC arr[], int size)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j].n < arr[j + 1].n)
			{
				DONTHUC temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
