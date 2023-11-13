#include<iostream>
#include<cmath>
using namespace std;

struct phanso
{
	int Tu;
	int Mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void QuiDongTu(PHANSO&,PHANSO&);

int main()
{
	PHANSO P, Q;
	cout << "Nhap phan so 1:";
	Nhap(P);
	cout << "Phan so 1: ";
	Xuat(P);
	cout << "\nNhap phan so 2:";
	Nhap(Q);
	cout << "Phan so 2: ";
	Xuat(Q);


	QuiDongTu(P, Q);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau : ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void QuiDongTu(PHANSO& x, PHANSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * y.Tu;
	x.Tu = tc;
	y.Tu = tc;
}