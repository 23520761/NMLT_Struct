#include<iostream>

using namespace std;

struct Ngay
{
	int day;
	int month;
	int year;
};
typedef Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

int main()
{
	NGAY ngay;
	Nhap(ngay);
	Xuat(ngay);
	return 0;
}

void Nhap(NGAY& a)
{
	cout << "Nhap ngay : ";
	cin >> a.day;
	cout << "Nhap thang : ";
	cin >> a.month;
	cout << "Nhap nam : ";
	cin >> a.year;
}

void Xuat(NGAY a)
{
	cout << a.day << "/" << a.month << "/" << a.year;
}