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
DATHUC operator+(DATHUC, DATHUC);
void SapXep(DONTHUC[], int);

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
	Tong1 = e + g;
	cout << "\nTong cua 2 da thuc la: ";
	Xuat(Tong1, Tong1.soluong);
	return 1;
}

DATHUC operator+(DATHUC a, DATHUC b)
{
	DATHUC Tong;
	int i = 0, j = 0, k = 0;
	SapXep(a.donthuc, a.soluong);
	SapXep(b.donthuc, b.soluong);
	while (i < a.soluong && j < b.soluong)
	{
		if (a.donthuc[i].n > b.donthuc[j].n)
			Tong.donthuc[k++] = a.donthuc[i++];
		else if (a.donthuc[i].n < b.donthuc[j].n)
			Tong.donthuc[k++] = b.donthuc[j++];
		else
		{
			Tong.donthuc[k].n = a.donthuc[i].n;
			Tong.donthuc[k++].a = a.donthuc[i++].a + b.donthuc[j++].a;
		}
	}
	while (i < a.soluong)
		Tong.donthuc[k++] = a.donthuc[i++];
	while (j < b.soluong)
		Tong.donthuc[k++] = b.donthuc[j++];
	Tong.soluong = k;
	return Tong;
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