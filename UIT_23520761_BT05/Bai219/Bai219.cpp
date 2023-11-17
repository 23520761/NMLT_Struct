#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Mảng một chiều các đường tròn.
	// Bai200: Cho n đường tròn. Tìm một đường tròn trong n đường tròn đó gần trục Ox nhất

struct Diem
{
	float x;
	float y;
};
typedef struct Diem	DIEM;

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

float KhoangCachOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON[], int);


int main()
{
	int n;
	DUONGTRON a[100];
	Nhap(a, n);
	cout << "\nDuong tron vua nhap: ";
	Xuat(a, n);
	cout << "\nDuong tron trong n duong tron gan Ox nhat: ";
	Xuat(GanOxNhat(a, n));

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "\nNhap x: ";
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
	cout << "\nNhap tam I: ";
	Nhap(c.I);
	cout << "Nhap ban kinh R: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh R = " << c.R  << endl;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap so duong tron: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong tron " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong tron " << i + 1 << ": ";
		Xuat(a[i]);
	}

}


float KhoangCachOx(DUONGTRON c)
{
	if (abs(c.I.y) < c.R)
		return 0;
	return abs(abs(c.I.y) - c.R);
}

DUONGTRON GanOxNhat(DUONGTRON a[], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCachOx(a[i]) < KhoangCachOx(lc))
			lc = a[i];
	return lc;
}