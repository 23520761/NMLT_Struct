#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Mảng 1 chiều số phức
	// Bai192: Viết hàm xuất mảng 1 chiều số phức

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

int main()
{
	int n;
	SOPHUC a[100];
	Nhap(a, n);
	cout << "\nCac so phuc: ";
	Xuat(a, n);
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6) << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo   = " << x.Ao << endl;
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap so luong so phuc: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc " << i + 1 << ": ";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nSo phuc " << i + 1 << ": ";
		Xuat(a[i]);
	}
}
