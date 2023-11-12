#include<iostream>

using namespace std;
struct DuongTron
{
	float x;
	float y;
	float r;
};
typedef DuongTron DUONGTRON;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DUONGTRON&, DUONGTHANG&);
int Xuat(DUONGTRON, DUONGTHANG);

int main()
{
	DUONGTRON a;
	DUONGTHANG b;
	Nhap(a, b);
	cout << Xuat(a, b);
	return 0;
}

void Nhap(DUONGTRON& a, DUONGTHANG& b)
{
	cout << "Nhap tam cua duong tron " << endl;
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do ";
	cin >> a.y;
	cout << "Nhap ban kinh ";
	cin >> a.r;
	cout << "Nhap phuong trinh duong thang " << endl;
	cout << "Nhap he so cua x ";
	cin >> b.a;
	cout << "Nhap he so cua y ";
	cin >> b.b;
	cout << "Nhap he so tu do ";
	cin >> b.c;
}

int Xuat(DUONGTRON a, DUONGTHANG b)
{
	float lc = (float)abs(b.a * a.x + b.b * a.y + b.c) / sqrt(b.a * b.a + b.b * b.b);
	if (lc > a.r)
		return 0;
	if (lc = a.r)
		return 1;
	return 2;
}
