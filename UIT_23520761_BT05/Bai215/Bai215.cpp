#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Mảng 1 chiều
	// Bai196: Viết hàm nhập mảng 1 chiều các đường tròn

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

void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);

int main()
{
	int n;
	DUONGTRON cc[100];
	Nhap(cc, n);
	cout << "\nCac duong tron vua nhap: ";
	Xuat(cc, n);

	return 0;
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
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "\nNhap tam I:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R << endl;;
}

void Nhap(DUONGTRON cc[], int& n)
{
	cout << "Nhap so luong duong tron: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong tron thu " << i + 1 << ": ";
		Nhap(cc[i]);
	}
}

void Xuat(DUONGTRON cc[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong tron " << i + 1 << ": ";
		Xuat(cc[i]);
	}
}