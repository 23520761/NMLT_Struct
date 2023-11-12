#include<iostream>

using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef ThoiGian THOIGIAN;

void Nhap(THOIGIAN&,THOIGIAN&);
void KhoangCach(THOIGIAN, THOIGIAN);

int main()
{
	THOIGIAN a, b;
	Nhap(a, b);
	KhoangCach(a, b);
	return 0;
}

void Nhap(THOIGIAN& a,THOIGIAN& b)
{
	cout << "\nNhap thoi diem thu nhat " << endl;
	cout << "Nhap gio : ";
	cin >> a.Gio;
	cout << "Nhap phut : ";
	cin >> a.Phut;
	cout << "Nhap giay : ";
	cin >> a.Giay;
	cout << "\nNhap thoi diem thu hai " << endl;
	cout << "Nhap gio : ";
	cin >> b.Gio;
	cout << "Nhap phut : ";
	cin >> b.Phut;
	cout << "Nhap giay : ";
	cin >> b.Giay;
}

void KhoangCach(THOIGIAN a, THOIGIAN b)
{
	int temp1 = a.Gio * 3600 + a.Phut * 60 + a.Giay;
	int temp2 = b.Gio * 3600 + b.Phut * 60 + b.Giay;
	cout << "Khoang cach giua hai thoi diem la " << abs(temp1 - temp2);
}
