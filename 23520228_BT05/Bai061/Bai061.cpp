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

int UCLN(int, int);
void RutGon(PHANSO);
PHANSO operator*(PHANSO, PHANSO);

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

	Xuat(P * Q);
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
void RutGon(PHANSO x)
{
	int ucln = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / ucln;
	x.Mau = x.Mau / ucln;
 }

PHANSO operator*(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Tu;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}