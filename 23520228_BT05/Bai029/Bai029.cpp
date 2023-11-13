#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int ktThuoc3(DIEM);

int main()
{
	DIEM A;
	cout << "Nhap toa do diem A: ";
	Nhap(A);
	cout << "Toa do diem A: ";
	Xuat(A);

	if (ktThuoc3(A) == 1)
		cout << "Diem A thuoc phan tu thu III";
	else
		cout << "Diem A khong thuoc phan tu thu III";
	return 0;
}

void Nhap(DIEM& A)
{
	cout << "\nNhap x: ";
	cin >> A.x;
	cout << "Nhap y: ";
	cin >> A.y;
}

void Xuat(DIEM A)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx = " << A.x << endl;
	cout << "\ny = " << A.y << endl;
}

int ktThuoc3(DIEM A)
{
	if (A.x < 0 && A.y < 0)
		return 1;
	return 0;
}