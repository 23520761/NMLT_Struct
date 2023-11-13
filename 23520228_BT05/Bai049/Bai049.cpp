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
void RutGon(PHANSO&);
PHANSO Hieu(PHANSO, PHANSO);

int main()
{
	PHANSO P,Q;
	cout << "Nhap phan so cua P:";
	Nhap(P);
	cout << "Phan so P: ";
	Xuat(P);
	cout << "\nNhap phan so cua Q:";
	Nhap(Q);
	cout << "Phan so Q: ";
	Xuat(Q);

	PHANSO kq = Hieu(P, Q);
	cout << "\nHieu 2 phan so = ";
	Xuat(kq);
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

void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO Hieu(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}