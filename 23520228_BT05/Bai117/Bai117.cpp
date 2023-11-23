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

DONTHUC operator*(DONTHUC, DONTHUC);

int main()
{
	DONTHUC f, g;
	cout << "Nhap don thuc 1: ";
	Nhap(f);
	cout << "Nhap don thuc 2: ";
	Nhap(g);
	cout << "Don thuc 1:";
	Xuat(f);
	cout << "Don thuc 2:";
	Xuat(g);

	cout << "\nTich = ";
	Xuat(f * g);
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

DONTHUC operator*(DONTHUC f, DONTHUC g)
{
	DONTHUC temp;
	temp.a = f.a * g.a;
	temp.n = f.n + g.n;
	return temp;
}