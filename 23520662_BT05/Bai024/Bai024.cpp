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

int main()
{
	DIEM ln;
	Nhap(ln);
	cout << "\nDiem vua nhap:";
	Xuat(ln);
	cout << "\nx nghich dao la: " << DoiXungPhanGiac1(ln).x;
	cout << "\ny nghich dao la: " << DoiXungPhanGiac1(ln).y;
	return 1;
}

DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
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
