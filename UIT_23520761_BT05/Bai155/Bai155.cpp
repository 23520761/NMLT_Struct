#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Tam giác
	// Bai136: Nhập tam giác.

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

int main()
{
	TAMGIAC M;

	cout << "Nhap tam giac: ";
	Nhap(M);
	cout << "\nTam giac vua nhap: ";
	Xuat(M);

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
	cout << "\nNhap A: ";
	Nhap(t.A);
	cout << "\nNhap B: ";
	Nhap(t.B);
	cout << "\nNhap C: ";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\n A:";
	Xuat(t.A);
	cout << "\n B:";
	Xuat(t.B);
	cout << "\n C:";
	Xuat(t.C);
}