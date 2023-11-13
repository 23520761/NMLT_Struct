#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct sophuc
{
	float Thuc;
	float Ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

SOPHUC Thuong(SOPHUC, SOPHUC);

int main()
{
	SOPHUC A,B;
	cout << "Nhap so phuc 1: ";
	Nhap(A);
	cout << "So phuc 1:";
	Xuat(A);
	cout << "Nhap so phuc 2: ";
	Nhap(B);
	cout << "So phuc 2:";
	Xuat(B);
	
	SOPHUC C;
	C = Thuong(A, B);
	cout << "\nThuong la: ";
	Xuat(C);
	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nPhan thuc: " << x.Thuc;
	cout << "\nPhan ao: " << x.Ao;
}

SOPHUC Thuong(SOPHUC x, SOPHUC y)
{
	float mc = y.Thuc * y.Thuc + y.Ao * y.Ao;
	SOPHUC temp;
	temp.Thuc = (x.Ao * y.Thuc + x.Ao * y.Ao) / mc;
	temp.Thuc = (x.Ao * y.Thuc - x.Thuc * y.Ao) / mc;
	return temp;
}