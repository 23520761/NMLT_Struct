#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
// Mảng một chiều cấu trúc
// Bai176: Tìm một điểm trong mảng có tung độ lớn nhất trong mảng

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

DIEM TungLonNhat(DIEM[], int);

int main()
{
	int n;
	DIEM a[100];
	Nhap(a, n);
	Xuat(a, n);
	cout << endl;
	cout << "\nDiem co tung do lon nhat trong mang: ";
	Xuat(TungLonNhat(a, n));
	return 0;
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
	cout << " x = " << P.x << ", " << "\y = " << P.y << endl;

}

void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		Nhap(a[i]);
	}
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\na[" << i << "]: ";
		Xuat(a[i]);
	}
}

DIEM TungLonNhat(DIEM a[], int n)
{
	DIEM lc = a[0];
	for (int i = 0; i <= n - 1; i++)
		if (a[i].y > lc.y)
			lc = a[i];
	return lc;
}