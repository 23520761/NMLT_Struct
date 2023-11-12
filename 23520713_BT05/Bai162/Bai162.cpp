#include<iostream>

using namespace std;

struct DuongThang
{
	float a, b, c;
};
typedef DuongThang DUONGTHANG;

struct Diem
{
	float x, y;
};
typedef Diem DIEM;

void Nhap(DUONGTHANG&, DIEM&);
void Xuat(DUONGTHANG, DIEM);

int main()
{
	DUONGTHANG a;
	DIEM b;
	Nhap(a, b);
	Xuat(a, b);
	return 0;
}

void Nhap(DUONGTHANG& a, DIEM& b)
{
	cout << "Nhap phuong trinh duong thang " << endl;
	cout << "Nhap he so cua x ";
	cin >> a.a;
	cout << "Nhap he so cua y ";
	cin >> a.b;
	cout << "Nhap he so tu do ";
	cin >> a.c;
	cout << "\n Nhap diem "<<endl;
	cout << "Nhap hoanh do ";
	cin >> b.x;
	cout << "Nhap tung do ";
	cin >> b.y;
}

void Xuat(DUONGTHANG a, DIEM b)
{
	cout << "Khoang cach la ";
	cout << abs(a.a * b.x + a.b * b.y + a.c) / sqrt(a.a + a.b * a.b);
}