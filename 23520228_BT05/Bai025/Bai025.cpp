#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

DIEM DoiXungPhanGiac(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap toa do diem A: ";
	Nhap(A);
	cout << "Toa do diem A: ";
	Xuat(A);

	DIEM B;
	B = DoiXungPhanGiac(A);
	cout << "\nDiem doi xung cua A qua duong phan giac thu hai y = -x: ";
	Xuat(B);
	return 1;
}

void Nhap(DIEM& A)
{
	cout << "\nNhap x: ";
	cin >> A.x;
	cout << "Nhap y: ";
	cin >> A.y;
}

void Xuat(DIEM A)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << A.x << endl;
	cout << "\ny = " << A.y << endl;
}

DIEM DoiXungPhanGiac(DIEM A)
{
	DIEM temp;
	temp.x = -A.y;
	temp.y = -A.x;
	return temp;
}