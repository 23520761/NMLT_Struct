#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	int x;
	int y;
};
typedef struct DIEM DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int main()
{
	DIEM ln[500];
	int n;
	Nhap(ln, n);
	cout << "\nDiem vua nhap:";
	Xuat(ln, n);
	return 1;
}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
void Xuat(DIEM l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}