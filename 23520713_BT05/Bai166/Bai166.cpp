#include<iostream>

using namespace std;

struct DuongThang
{
	float a, b, c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&, DUONGTHANG&);
void Xuat(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG a, b;
	Nhap(a, b);
	Xuat(a, b);
	return 0;
}

void Nhap(DUONGTHANG& a, DUONGTHANG& b)
{
	cout << "Nhap phuong trinh duong thang nhat " << endl;
	cout << "Nhap he so cua x ";
	cin >> a.a;
	cout << "Nhap he so cua y ";
	cin >> a.b;
	cout << "Nhap he so tu do ";
	cin >> a.c;
	cout << "\nNhap phuong trinh duong thang thu hai " << endl;
	cout << "Nhap he so cua x ";
	cin >> b.a;
	cout << "Nhap he so cua y ";
	cin >> b.b;
	cout << "Nhap he so tu do ";
	cin >> b.c;
}

void Xuat(DUONGTHANG a, DUONGTHANG b)
{
	float d = a.a * b.b - a.b * b.a;
	float d1 = a.c * b.b - a.b * b.c;
	float d2 = a.a * b.c - a.c * b.a;
	if (d == 0 && d1 == 0 && d2 == 0)
	{
		cout << "Co vo so giao diem ";
		return;
	}
	if (d == 0 && (d1 != 0 || d2 != 0))
	{
		cout << "Khong co giao diem ";
		return;
	}
	if (d != 0)
	{
		cout << "Co mot giao diem la (" << d / d1 << "," << d / d2 << ")";
	}
}