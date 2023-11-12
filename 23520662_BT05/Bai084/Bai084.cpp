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

int main()
{
	THOIGIAN g;
	Nhap(g);
	Xuat(g);
	return 1;
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
