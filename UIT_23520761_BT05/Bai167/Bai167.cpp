#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đường thẳng d: ax + by + c = 0 trong Oxy
	// Bai148: Định nghĩa hàm xuất đường thẳng.

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
	DUONGTHANG d;

	cout << "Nhap duong thang: ";
	Nhap(d);
	cout << "\nDuong thang vua nhap: ";
	Xuat(d);
	return 1;
}

void Nhap(DUONGTHANG& x)
{
	cout << "\nNhap a: ";
	cin >> x.a;
	cout << "Nhap b: ";
	cin >> x.b;
	cout << "Nhap c: ";
	cin >> x.c;
}

void Xuat(DUONGTHANG x)
{
	cout << "\n a = " << x.a;
	cout << "\n b = " << x.b;
	cout << "\n c = " << x.c;
}