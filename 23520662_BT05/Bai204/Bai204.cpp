#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
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
void Nhap(DUONGTRON[], int&);
void Xuat(DUONGTRON[], int);
void Nhap(DIEM&);
void Xuat(DIEM);
float TinhGiao(DUONGTRON, DUONGTRON);
float TinhDienTichPhu(DUONGTRON[], int);

int main()
{
	DUONGTRON g[500];
	int n;
	Nhap(g, n);
	cout << "\nDuong tron vua nhap:";
	Xuat(g, n);
	cout << "\n\nDien tich phu la:";
	float dienTichPhu = TinhDienTichPhu(g, n);
	cout << dienTichPhu;
	return 1;
}

float TinhGiao(DUONGTRON a, DUONGTRON b) {
	float d = sqrt(pow(a.I.x - b.I.x, 2) + pow(a.I.y - b.I.y, 2));
	float r1 = a.R;
	float r2 = b.R;

	if (d >= r1 + r2) {
		return 0;
	}

	if (d <= abs(r1 - r2)) {
		return M_PI * min(r1, r2) * min(r1, r2);
	}

	float alpha = acos((r1 * r1 + d * d - r2 * r2) / (2 * r1 * d));
	float beta = acos((r2 * r2 + d * d - r1 * r1) / (2 * r2 * d));

	float giaoChung = r1 * r1 * alpha + r2 * r2 * beta - r1 * d * sin(alpha);
	return giaoChung;
}

float TinhDienTichPhu(DUONGTRON circles[], int n) {
	float dienTich = 0;

	for (int i = 0; i < n; i++) {
		dienTich += M_PI * circles[i].R * circles[i].R;
		for (int j = i + 1; j < n; j++) {
			dienTich -= TinhGiao(circles[i], circles[j]);
		}
	}

	return dienTich;
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