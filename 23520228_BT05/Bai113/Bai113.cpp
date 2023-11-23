#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct donthuc
{
	float a;
	int n;
};
typedef struct donthuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

DONTHUC Thuong(DONTHUC, DONTHUC);

int main()
{
	DONTHUC ff,gg;
	cout << "Nhap don thuc 1: ";
	Nhap(ff);
	cout << "Nhap don thuc 2: ";
	Nhap(gg);
	cout << "Don thuc 1:";
	Xuat(ff);
	cout << "Don thuc 2:";
	Xuat(gg);

	DONTHUC aa;
	aa = Thuong(ff, gg);
	cout << "\nThuong = ";
	Xuat(aa);
	return 0;
}

void Nhap(DONTHUC& x)
{
	cout << "\nNhap he so 1: ";
	cin >> x.a;
	cout << "Nhap so mu 1: ";
	cin >> x.n;
}

void Xuat(DONTHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\n a = " << x.a;
	cout << "\n n = " << x.n;
}

DONTHUC Thuong(DONTHUC ff, DONTHUC gg)
{
	DONTHUC temp;
	temp.a = ff.a / gg.a;
	temp.n = ff.n - gg.n;
	return temp;
}