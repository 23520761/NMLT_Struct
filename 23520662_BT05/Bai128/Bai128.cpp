#include <iostream>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

struct HinhCau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(HINHCAU&);
void Xuat(HINHCAU);
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	HINHCAU g;
	Nhap(g);
	cout << "\nHinh cau vua nhap:";
	Xuat(g);
	return 1;
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Nhap(DIEMKHONGGIAN& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
	cout << "Nhap z: ";
	cin >> l.z;
}

void Xuat(DIEMKHONGGIAN l)
{
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
	cout << "\nz: " << l.z;
}