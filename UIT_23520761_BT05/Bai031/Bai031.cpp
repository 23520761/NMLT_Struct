#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Đường thẳng trong mặt phẩn Oxy-Line
	// Khái niệm: ax + by + c = 0
	// Bai012
	
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG ln;
	cout << "Duong thang vua nhap:";
	Nhap(ln);
	cout << "\nDuong thang: ";
	Xuat(ln);

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
	cout << setw(6) << setprecision(3);
	cout << "\n a = " << l.a;
	cout << "\n b = " << l.b;
	cout << "\n c = " << l.c;
}