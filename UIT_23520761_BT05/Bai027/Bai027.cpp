#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Bài Đơn thức: f(x) = a * x^n
	// Bài 008
struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

int main()
{
	DONTHUC g;
	Nhap(g);
	cout << "\nDon thuc vua nhap: ";
	Xuat(g);
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