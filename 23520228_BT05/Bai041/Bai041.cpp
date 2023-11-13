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

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap toa do diem P: ";
	Nhap(P);
	cout << "Toa do diem P:";
	Xuat(P);

	DIEMKHONGGIAN Q;
	Q = DoiXungOxz(P);
	cout << "\nToa do doi xung qua mat phang Oxz:";
	Xuat(Q);
	return 0;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "\nNhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "\nx: " << P.x;
	cout << "\ny: " << P.y;
	cout << "\nz: " << P.z;
}

DIEMKHONGGIAN DoiXungOxz(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = -P.y;
	temp.z = P.z;
	return temp;
}