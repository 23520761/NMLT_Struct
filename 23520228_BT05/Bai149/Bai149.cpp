#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct diemkhonggian
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;
struct duongthang
{
	float a;
	float b;
	float c;
};
typedef struct duongthang DUONGTHANG;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx=" << P.x;
	cout << "\ny=" << P.y;
	cout << "\nz=" << P.z;
}

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

int ktThuoc(DUONGTHANG d, DIEMKHONGGIAN P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return 1;
	return 0;
}

int main()
{
	DIEMKHONGGIAN diem;
	DUONGTHANG dt;

	cout << "Tao 1 diem bat ky:"<<endl;
	cout << "Nhap toa do:" << endl;
	Nhap(diem);
	cout << "Tao 1 duong thang:" << endl;
	cout << "Nhap he so:" << endl;
	Nhap(dt);

	cout << "\n\nTa co 1 diem:" << endl;
	Xuat(diem);
	cout << "\nTa co 1 duong thang:" << endl;
	Xuat(dt);

	if (ktThuoc(dt, diem) == 1)
		cout << "Diem do thuoc duong thang";
	cout << "Diem do khong thuoc duong thang";

	return 0;
}
