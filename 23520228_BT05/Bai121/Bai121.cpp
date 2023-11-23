#include<iostream>
#include<iomanip>
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

int main()
{
	DIEM I;
	DUONGTRON P;
	cout << "Nhap toa do I:" << endl;
	Nhap(I);
	cout << "Toa do diem I:" << endl;
	Xuat(I);

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
