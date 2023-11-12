#include<iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
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

void Xuat(PHANSO a)
{
	if (a.Mau * a.Tu < 0)
		cout << "La phan so am";
	else
		cout << "La phan so duong";
}