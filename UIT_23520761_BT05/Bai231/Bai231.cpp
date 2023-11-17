#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
// Chủ đề: Mảng một chiều các đường thẳng
// Bai212: Cho n đường thẳng và tọa độ điểm P không thuộc vô bất kì đường thẳng nào. Hãy tìm 1 điểm gần với điểm P nhất
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

float KhoangCach(DUONGTHANG, DIEM);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int, DIEM);

int main()
{
	DIEM P;
	cout << "Nhap diem P: ";
	Nhap(P);
	int n;
	DUONGTHANG a[100];
	Nhap(a, n);
	cout << "\nDiem P vua nhap: ";
	Xuat(P);
	cout << "\nCac duong thang vua nhap: ";
	Xuat(a, n);

	cout << "\nDuong thang gan voi diem P nhat: ";
	Xuat(GanDiemNhat(a, n, P));

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
	cout << "\ny = " << P.y << endl;
}

void Nhap(DUONGTHANG& d)
{
	cout << "\nNhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na = " << d.a;
	cout << "\nb = " << d.b;
	cout << "\nc = " << d.c << endl;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap so duong thang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang " << i + 1 << ": ";
		Nhap(a[i]);
	}
}

void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong thang " << i + 1 << ": ";
		Xuat(a[i]);
	}
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float kc = 0;
	kc = abs(d.a * P.x + d.b * P.y + d.c) / sqrt(pow(d.a, 2) + pow(d.b, 2));
	return kc;
}

DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(a[i], P) < KhoangCach(lc, P))
			lc = a[i];
	return lc;
}
