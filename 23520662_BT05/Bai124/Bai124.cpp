#include <iostream>
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

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DIEM&);
void Xuat(DIEM);
int ktThuoc(DUONGTRON, DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	DUONGTRON g;
	DIEM P;
	Nhap(g);
	cout << "Nhap toa do diem: ";
	Nhap(P);
	cout << "\nDuong tron vua nhap:";
	Xuat(g);
	if (ktThuoc(g, P))
		cout << "\nThuoc Duong tron";
	else
		cout << "\nKhong thuoc Duong tron";
	return 1;
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
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
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

void Nhap(DIEM& l)
{
	cout << "\nNhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}

void Xuat(DIEM l)
{
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}