#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;


void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG g;
	Nhap(g);
	cout << "\nDuong thang co dang: ";
	Xuat(g);
	return 1;
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Xuat(DUONGTHANG l)
{
	cout << l.a << "x" << " + " << l.b << "y" << " + " << l.c << " = 0";
}