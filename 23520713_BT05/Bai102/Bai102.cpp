#include<iostream>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);

int main()
{
	THOIGIAN a;
	Nhap(a);
	return 0;
}

void Nhap(THOIGIAN& a)
{
	cout << "Nhap gio : ";
	cin >> a.Gio;
	cout << "Nhap phut : ";
	cin >> a.Phut;
	cout << "Nhap giay : ";
	cin >> a.Giay;
}