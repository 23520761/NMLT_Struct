#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

	// Chủ đề điểm trong không gian Oxyz
	// Bai036: Tính khoảng cách giũa 2 điểm trong không gian theo phương y;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	DIEMKHONGGIAN Q;
	cout << "Nhap toa do diem P: " << endl;
	Nhap(P);
	cout << "Nhap toa do diem Q: " << endl;
	Nhap(Q);
	cout << "\nToa do diem P trong Oxyz: ";
	Xuat(P);
	cout << "Toa do diem Q trong Oxyz: ";
	Xuat(Q);

	float kc = KhoangCachY(P, Q);
	cout << "\nKhoang cach diem P va Q theo phuong y: " << setprecision(3) << kc << endl;
	
	return 1;
}

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
	cout << "(" << P.x << ", " << P.y << ", " << P.z << ")" << endl;
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(P.y - Q.y);
	
}