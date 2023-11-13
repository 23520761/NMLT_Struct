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

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

float KhoangCachZ(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P,Q;
	cout << "Nhap toa do diem P: ";
	Nhap(P);
	cout << "Toa do diem P:";
	Xuat(P);

	cout << "Nhap toa do diem Q: ";
	Nhap(Q);
	cout << "Toa do diem Q:";
	Xuat(Q);
	return 0;
}

void Nhap(DIEMKHONGGIAN& K)
{
	cout << "\nNhap x: ";
	cin >> K.x;
	cout << "Nhap y: ";
	cin >> K.y;
	cout << "Nhap z: ";
	cin >> K.z;
}

void Xuat(DIEMKHONGGIAN K)
{
	cout << "\nx: " << K.x;
	cout << "\ny: " << K.y;
	cout << "\nz: " << K.z;
}

float KhoangCachZ(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.z - P.z);
}