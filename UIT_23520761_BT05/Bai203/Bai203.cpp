#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Mảng một chiều kiểu phân số
	// Bai184: Viết hàm đếm số lượng phân số trong mảng

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);

int KtDuong(PHANSO);
int DemDuong(PHANSO[], int);

int main()
{
	int n;
	PHANSO a[100];
	Nhap(a, n);
	cout << "\n\nCac phan so vua nhap: ";
	Xuat(a, n);
	int dem = DemDuong(a, n);
	cout << "\n\nSo luong phan so duong: " << dem;
	cout << "\n\nKet thuc.";
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}
void Xuat(PHANSO x)
{
	cout << "\nTu : " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap so luong phan so: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so " << i + 1 << ": ";
		Nhap(a[i]);
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		cout << "\nPhan so " << i + 1 << ":";
		Xuat(a[i]);
	}
}

int KtDuong(PHANSO P)
{
	if (P.Tu * P.Mau < 0)
		return 0;
	return 1;
}

int DemDuong(PHANSO a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		if (KtDuong(a[i]) == 1)
			dem++;
	return dem;
}