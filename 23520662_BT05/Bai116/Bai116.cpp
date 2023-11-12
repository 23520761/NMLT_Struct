#include <iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC g;
	int e;
	cout << "Nhap x0: ";
	cin >> e;
	Nhap(g);
	cout << "\nDon thuc vua nhap:";
	Xuat(g); cout << endl;
	cout << "Tich 2 don thuc la: ";
	cout << TinhGiaTri(g, e);
	return 1;
}

float TinhGiaTri(DONTHUC f, float x)
{
	float T = 1;
	for (int i = 1; i <= f.n; i++)
		T = T * x;
	T = T * f.a;
	return T;
}


void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}

void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}
