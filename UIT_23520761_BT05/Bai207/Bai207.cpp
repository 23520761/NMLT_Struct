#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
// Chủ đề: Kiểu phân sô trong mảng một chiều
// Bai188: Tìm giá trị dương nhỏ nhất trong mảng.
//		   Nếu mảng không có giá trị dương nào thì trả về phân số không dương -1/1.

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

float GiaTri(PHANSO);
int KtDuong(PHANSO);
int SoSanh(PHANSO, PHANSO);
PHANSO PhanSoDuong(PHANSO[], int);
PHANSO DuongNhoNhat(PHANSO[], int);


int main()
{
	int n;
	PHANSO a[100];
	Nhap(a, n);
	cout << "\n\nCac phan so vua nhap: ";
	Xuat(a, n);
	cout << "\n\nPhan so duong nho nhat: ";
	Xuat(DuongNhoNhat(a, n));

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
	if (P.Tu * P.Mau <= 0)
		return 0;
	return 1;
}

float GiaTri(PHANSO P)
{
	float Gtri = (float)P.Tu / P.Mau;
	return Gtri;
}

int SoSanh(PHANSO P, PHANSO Q)
{
	// so sánh nhỏ hơn
	float a = GiaTri(P);
	float b = GiaTri(Q);
	if (a < b)
		return 1;
	return 0;
}

PHANSO PhanSoDuong(PHANSO a[], int n)
{
	for (int i = 0; i < n; i++)
		if (KtDuong(a[i]) == 1)
			return a[i];
}

PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	// Cách 1: 
	if (n == 0)
	{
		PHANSO lc = { -1, 1 };
	}
	PHANSO lc = PhanSoDuong(a, n);
	for (int i = 0; i < n; i++)
		// duyệt những phân số dương
		if (KtDuong(a[i]) == 1)
			if (SoSanh(a[i], lc) == 1)
		  		lc = a[i];
	return lc;

	/*
	* // Cách 2: ưu tiên sau khi học xong đệ quy
	if (n == 0)
	{
		PHANSO lc = { -1, 1 };
		return lc;
	}
	
	// ý tưởng dùng đệ quy.
	// đặt lính canh nhỏ nhất: là các phần tử n - 1.
	PHANSO lc = DuongNhoNhat(a, n - 1);
	if (KtDuong(a[n - 1]) == 0)
		return lc;
	// nếu mảng nhỏ n - 1 phần tử toàn bộ bằng 0 => trả về phần tử cuối cùng
	if (KtDuong(lc) == 0)
		return a[n - 1];
	if (SoSanh(a[n - 1], lc) == 1)
		lc = a[n - 1];
	return lc;
	*/
	
}
