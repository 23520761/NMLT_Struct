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
DONTHUC Tich(DONTHUC, DONTHUC);

int main()
{
	DONTHUC g, e;
	Nhap(g);
	Nhap(e);
	cout << "\nDon thuc vua nhap:";
	Xuat(g); cout << endl;
	Xuat(e); cout << endl;
	cout << "Tich 2 don thuc la: ";
	Xuat(Tich(g, e));
	return 1;
}

DONTHUC Tich(DONTHUC a, DONTHUC b)
{
	DONTHUC temp;
	temp.a = a.a * b.a;
	temp.n = a.n + b.n;
	return temp;
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
