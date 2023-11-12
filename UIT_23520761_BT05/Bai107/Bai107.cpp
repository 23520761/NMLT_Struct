#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Thời gian.
	// Bai088: Tính số thứ tự giây kể từ 00: 00: 00.

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
	THOIGIAN A;
	cout << "Nhap thoi gian A:";
	Nhap(A);
	cout << "\nThoi gian A: ";
	Xuat(A);
	
	int stt = SoThuTu(A);
	cout << "\nSo thu tu thoi gian A ke tu luc 00: 00: 00 la: " << stt;

	return 1;
}

void Nhap(THOIGIAN& x)
{
	cout << "\nNhap gio: ";
	cin >> x.Gio;
	cout << "Nhap phut: ";
	cin >> x.Phut;
	cout << "Nhap giay: ";
	cin >> x.Giay;
}

void Xuat(THOIGIAN x)
{
	cout << "\nGio : " << x.Gio;
	cout << "\nPhut: " << x.Phut;
	cout << "\nGiay: " << x.Giay;
}

int SoThuTu(THOIGIAN x)
{
	return x.Gio * 3600 + x.Phut * 60 + x.Giay;
}