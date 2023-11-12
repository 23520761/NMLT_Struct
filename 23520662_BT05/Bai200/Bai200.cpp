#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);
float KhoangCachOx(DUONGTRON);
DUONGTRON GanOxNhat(DUONGTRON[], int);


int main()
{
	DUONGTRON g[500];
	int n;
	Nhap(g, n);
	cout << "\nDuong tron vua nhap:";
	Xuat(g, n);
	cout << "\nDuong tron gan 0x nhat la:";
	Xuat(GanOxNhat(g, n));
	return 1;
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

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}

void Xuat(DIEM l)
{
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}

void Nhap(DUONGTRON a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong tron thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTRON a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}