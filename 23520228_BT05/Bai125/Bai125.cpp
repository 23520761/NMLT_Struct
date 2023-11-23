#include<iostream>
#include<iomanip>
#include<cmath>
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

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

float KhoangCach(DUONGTRON,DIEM);
int TuongDoi(DUONGTRON, DIEM);

int main()
{
	DIEM I;
	DUONGTRON P;
	cout << "Nhap toa do I:" << endl;
	Nhap(I);
	cout << "Toa do diem I:" << endl;
	Xuat(I);
	cout << "Nhap toa do tam duong tron:" << endl;
	Nhap(P.I);
	cout << "Toa do tam duong tron:" << endl;
	Xuat(P.I);

	if (TuongDoi(P, I) == 0)
		cout << "Diem nam trong duong tron";
	if (TuongDoi(P, I) == 1)
		cout << "Diem nam tren duong tron";
	if (TuongDoi(P, I) == 2)
		cout << "Diem nam ngoai duong tron";
	return 0;
}

void Nhap(DIEM& t)
{
	cout << "Nhap x: ";
	cin >> t.x;
	cout << "Nhap y: ";
	cin >> t.y;
}

void Xuat(DIEM t)
{
	cout << "\nToa do x: " << t.x;
	cout << "\nToa do y: " << t.y;
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
	cout << "Nhap tam:\n";
	Xuat(c.I);
	cout << "Nhap ban kinh: " << c.R;
}

float KhoangCach(DUONGTRON c,DIEM A)
{
	return sqrt((c.I.x - A.x) * (c.I.x - A.x) + (c.I.y - A.y) * (c.I.y - A.y));
}

int TuongDoi(DUONGTRON c, DIEM A)
{
	float kc = KhoangCach(c, A);
	if (kc > c.R)
		return 2;
	if (kc < c.R)
		return 0;
	return 1;
}