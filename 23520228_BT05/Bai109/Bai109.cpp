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

int main()
{
	DONTHUC ff;
	cout << "Nhap don thuc: ";
	Nhap(ff);
	return 0;
}

void Nhap(DONTHUC& f)
{
	cout << "\nNhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
