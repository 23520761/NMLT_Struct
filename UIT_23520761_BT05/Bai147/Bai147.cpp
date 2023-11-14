#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đường tròn trong mặt phẳng Oxyz
	// Bai128
struct Diem
{
	float x;
	float y;
	float z;
};
typedef struct Diem DIEM;

struct HinhCau
{
	DIEM I;
	float R;
};
typedef struct HinhCau HINHCAU;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(HINHCAU&);
void Xuat(HINHCAU);

int main()
{
	HINHCAU hc;
	Nhap(hc);
	cout << "\nHinh cau vua nhap: ";
	Xuat(hc);

	return 1;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
	cout << "\nz = " << P.z;
}

void Nhap(HINHCAU& S)
{
	cout << "Nhap tam I: ";
	Nhap(S.I);
	cout << "Nhap ban kinh R: ";
	cin >> S.R;
}

void Xuat(HINHCAU S)
{
		cout << "\nTam I: ";
	Xuat(S.I);
	cout << "\nBan kinh R = " << S.R;
}