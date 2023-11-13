#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct honso
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct honso HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

void QuiDongTu(HONSO&, HONSO&);

int main()
{
	HONSO A, B;
	cout << "Nhap hon so 1: " << endl;;
	Nhap(A);
	cout << "Hon so 1: ";
	Xuat(A);
	cout << "Nhap hon so 2: "<<endl;
	Nhap(B);
	cout << "Hon so 2: ";
	Xuat(B);

	QuiDongTu(A, B);
	return 0;
}

void Nhap(HONSO& x)
{
	cout << "Nhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen: " << x.Nguyen;
	cout << "\nTu: " << x.Tu;
	cout << "\nMau: " << x.Mau << endl;
}

void QuiDongTu(HONSO& x, HONSO& y)
{
	int tc = x.Tu * y.Tu;
	x.Mau = x.Mau * y.Tu;
	y.Mau = y.Mau * x.Tu;
	x.Tu = tc;
	y.Tu = tc;
}

