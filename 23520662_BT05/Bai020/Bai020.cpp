#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	int x;
	int y;
};
typedef struct DIEM DIEM;

DIEM DoiXungPhanGiac1(DIEM);
void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachGoc(DIEM);

int main()
{
	DIEM ln;
	Nhap(ln);
	cout << "\nDiem vua nhap:";
	Xuat(ln);
	cout << "\nKhoang cach la: " << KhoangCachGoc(ln);
	return 1;
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(P.x * P.x + P.y * P.y);
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
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}
