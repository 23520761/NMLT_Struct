#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DIEM&);
void Xuat(DUONGTHANG);
void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);
DUONGTHANG GanDiemNhat(DUONGTHANG[], int, DIEM);
float KhoangCach(DUONGTHANG, DIEM);

int main()
{
	DUONGTHANG ln[500];
	DIEM P;
	int n;
	cout << "Nhap diem: \n";
	Nhap(P);
	Nhap(ln, n);
	cout << "\nDuong thang vua nhap:";
	Xuat(ln, n);
	cout << "\nDuong thang gan diem nhat:";
	Xuat(GanDiemNhat(ln, n, P));
	return 1;
}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}

float KhoangCach(DUONGTHANG d, DIEM P)
{
	float tu = abs(d.a * P.x + d.b * P.y + d.c);
	float mau = sqrt(d.a * d.a + d.b * d.b);
	return tu / mau;
}

DUONGTHANG GanDiemNhat(DUONGTHANG a[], int n, DIEM P)
{
	DUONGTHANG lc = a[0];
	for (int i = 0; i < n; i++)
		if (KhoangCach(a[i], P) < KhoangCach(lc, P))
			lc = a[i];
	return lc;
}

void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Xuat(DUONGTHANG l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\na: " << l.a;
	cout << "\nb: " << l.b;
	cout << "\nc: " << l.c;
}
