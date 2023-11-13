#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM P, Q;
	cout << "Nhap toa do diem A: ";
	Nhap(P);
	cout << "Nhap toa do diem B: ";
	Nhap(Q);
	cout << "\nToa do diem A: ";
	Xuat(P);
	cout << "\nToa do diem B: ";
	Xuat(Q);
	float kq = KhoangCach(P, Q);
	cout << setw(6);
	cout << setprecision(3);
	cout << "Khoang cach giua 2 diem P va Q: " << kq;
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
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << P.x<<endl;
	cout << "\ny = " << P.y<<endl;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}