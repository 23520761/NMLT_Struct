#include <iostream>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

float KhoangCachY(DIEMKHONGGIAN, DIEMKHONGGIAN);
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN ln;
	DIEMKHONGGIAN ld;
	Nhap(ln);
	cout << "\nDiem khong gian vua nhap:";
	Xuat(ln);
	cout << endl << endl;
	Nhap(ld);
	cout << "\nDiem khong gian vua nhap:";
	Xuat(ld);
	cout << "\nKhoang cach theo phuong y:" << KhoangCachY(ln, ld);

	return 1;
}

float KhoangCachY(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return abs(Q.y - P.y);
}

void Nhap(DIEMKHONGGIAN& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
	cout << "Nhap z: ";
	cin >> l.z;
}

void Xuat(DIEMKHONGGIAN l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
	cout << "\nz: " << l.z;
}
