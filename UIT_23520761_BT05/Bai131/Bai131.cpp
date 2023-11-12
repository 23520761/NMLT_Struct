#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đơn thức
	// Bai112: Tích hai đơn thức
	// Đơn thức 1: f(x) = ax^n
	// Đơn thức 2: g(x) = bx&m
	// Tích 2 đơn thức: h(x) = a * b x ^ (m + n)
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
	DONTHUC f, g;
	Nhap(f);
	Nhap(g);
	cout << "\nDon thuc f vua nhap: ";
	Xuat(f);
	cout << "\nDon thuc g vua nhap: ";
	Xuat(g);

	cout << endl;
	cout << "\nTich cua don thuc f va don thuc g: ";
	Xuat(Tich(f, g));

	return 1;
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

DONTHUC Tich(DONTHUC x, DONTHUC y)
{
	DONTHUC temp;
	temp.a = x.a * y.a;
	temp.n = x.n + y.n;
	return temp;
}