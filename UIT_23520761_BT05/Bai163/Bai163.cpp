#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// CHủ đề: Tam giac.
	// Bai144: Tính tổng tam giác

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

float KhoangCach(DIEM, DIEM);
float Tong(TAMGIAC);

int main()
{
	TAMGIAC M;
	cout << "Nhap tam giac: ";
	Nhap(M);
	cout << "\nTam giac vua nhap: ";
	Xuat(M);

	float s = Tong(M);
	cout << "\nTong cua tam giac M: " << fixed << setprecision(3) << s;
	cout << "\n\n\nKet thuc!!!!";
	return 1;
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
	cout << "\n x= " << P.x;
	cout << "\n y= " << P.y << endl;
}

void Nhap(TAMGIAC& t)
{
	cout << "\nNhap A:";
	Nhap(t.A);
	cout << "\nNhap B: ";
	Nhap(t.B);
	cout << "\nMhap C: ";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\n A: ";
	Xuat(t.A);
	cout << "\n B: ";
	Xuat(t.B);
	cout << "\n C: ";
	Xuat(t.C);
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

float Tong(TAMGIAC t)
{
	float a = KhoangCach(t.B, t.C);
	float b = KhoangCach(t.A, t.C);
	float c = KhoangCach(t.A, t.B);

	float s = a + b + c;
	return s;
}