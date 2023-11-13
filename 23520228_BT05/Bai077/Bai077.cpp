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
int UCLN(int, int);
void RutGon(HONSO&);

HONSO Tich(HONSO, HONSO);

int main()
{
	HONSO A,B;
	cout << "Nhap hon so 1: ";
	Nhap(A);
	cout << "Hon so 1: ";
	Xuat(A);
	cout << "Nhap hon so 2: ";
	Nhap(B);
	cout << "Hon so 2: ";
	Xuat(B);

	HONSO C;
	C = Tich(A, B);
	cout << "\nTich 2 hon so = ";
	Xuat(C);
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
	cout << "\nMau: " << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

void RutGon(HONSO& x)
{
	int ucln = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / ucln;
	x.Mau = x.Mau / ucln;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Tich(HONSO x, HONSO y)
{
	x.Tu = x.Nguyen * x.Mau + x.Tu;
	x.Nguyen = 0;
	y.Tu = y.Nguyen * y.Mau + y.Tu;
	y.Nguyen = 0;
	HONSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	temp.Nguyen = 0;
	RutGon(temp);
	return temp;
}