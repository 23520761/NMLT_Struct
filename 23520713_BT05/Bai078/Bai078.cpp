#include<iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&, PHANSO&);
int RutGon(int, int);
void Tong(PHANSO, PHANSO);

int main()
{
	PHANSO ps, ps1;
	Nhap(ps, ps1);
	Tong(ps, ps1);
	return 0;
}

void Nhap(PHANSO& a, PHANSO& b)
{
	cout << "\nNhap phan so thu nhat" << endl;
	cout << "Nhap tu : ";
	cin >> a.Tu;
	cout << "Nhap mau : ";
	cin >> a.Mau;
	cout << "\nNhap phan so thu hai" << endl;
	cout << "Nhap tu : ";
	cin >> b.Tu;
	cout << "Nhap mau : ";
	cin >> b.Mau;
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

void Tong(PHANSO a, PHANSO b)
{
	int kq = RutGon(a.Tu * b.Mau + b.Tu * a.Mau, a.Mau * b.Mau);
	cout << "\nTong cua hai phan so da nhap la " << (a.Tu * b.Mau + b.Tu * a.Mau) / kq << "/" << (a.Mau * b.Mau) / kq;
}