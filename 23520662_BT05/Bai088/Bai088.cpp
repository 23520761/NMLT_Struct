#include <iostream>
using namespace std;

struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef struct ThoiGian THOIGIAN;

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);
int SoThuTu(THOIGIAN);

int main()
{
	THOIGIAN g;
	Nhap(g);
	Xuat(g);
	cout << "\nSo thu tu giay: " << SoThuTu(g);
	return 1;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}

void Nhap(THOIGIAN& f)
{
	cout << "Nhap Gio: ";
	cin >> f.Gio;
	cout << "Nhap Phut: ";
	cin >> f.Phut;
	cout << "Nhap Giay: ";
	cin >> f.Giay;
}

void Xuat(THOIGIAN f)
{
	cout << "\nThoi gian la: ";
	cout << f.Gio << ":" << f.Phut << ":" << f.Giay;
}
