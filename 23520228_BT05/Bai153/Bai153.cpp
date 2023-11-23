#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int ktCat(DUONGTHANG, DUONGTHANG);

void Nhap(DUONGTHANG& d)
{
	cout << "Nhap a: ";
	cin >> d.a;
	cout << "Nhap b: ";
	cin >> d.b;
	cout << "Nhap c: ";
	cin >> d.c;
}

void Xuat(DUONGTHANG d)
{
	cout << "\na: " << d.a;
	cout << "\nb: " << d.b;
	cout << "\nc: " << d.c;
}

int ktCat(DUONGTHANG dt1, DUONGTHANG dt2)
{
	float D = dt1.a * dt2.b - dt2.a * dt1.b;
	if (D != 0)
		return 1;
	return 0;
}

int main()
{
	DUONGTHANG dt;
	cout << "Tao 2 duong thang:" << endl;
	cout << "Nhap he so cho duong thang 1:" << endl;
	Nhap(dt);
	cout << "Nhap he so cho duong thang 2:" << endl;
	Nhap(dt);

	cout << "\nTa co duong thang 1:" << endl;
	Xuat(dt);
	cout << "\nTa co duong thang 2:" << endl;
	Xuat(dt);

	if (ktCat(dt, dt) == 1)
		cout << "2 duong thang cat nhau";
	cout << "2 duong thang khong cat nhau";
	return 0;
}