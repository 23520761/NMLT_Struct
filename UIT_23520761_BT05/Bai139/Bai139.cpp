#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đường tròn trong mặt phẳng Oxyz
	// Bai120: Định nghĩa hàm nhập tọa độ 
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

int main()
{
	DUONGTRON cc;
	Nhap(cc);

	cout << "\nDuong tron vua nhap: ";
	Xuat(cc);
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam I:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh: "<< c.R;
}