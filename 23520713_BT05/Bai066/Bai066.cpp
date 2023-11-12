#include<iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
int RutGon(int, int);
void Xuat(PHANSO);

int main()
{
	PHANSO ps;
	Nhap(ps);
	Xuat(ps);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu : ";
	cin >> a.Tu;
	cout << "Nhap mau : ";
	cin >> a.Mau;
}

int RutGon(int a, int b)
{
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

void Xuat(PHANSO a)
{
	int ucln = RutGon(a.Tu, a.Mau);
	cout << a.Tu / ucln << "/" << a.Mau / ucln;
}