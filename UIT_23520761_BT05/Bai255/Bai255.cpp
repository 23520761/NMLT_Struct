#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ma trận số phức
	//Bai236: Tìm số phức đầu tiên trong ma trận có phần thực dương và phần ảo dương

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;
 
void Nhap(SOPHUC&);
void Xuat(SOPHUC);

void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);

int KtDuong(SOPHUC);
SOPHUC ThucAoDuongDau(SOPHUC[][100], int, int);

int main()
{
	int m;
	int n;
	SOPHUC a[100][100];
	Nhap(a, m, n);
	cout << "\nCac so phuc vua nhap: ";
	Xuat(a, m, n);
	cout << endl;
	cout << "\nSo phuc dau tien trong ma tran co phan thuc duong va ao duong: ";
	Xuat(ThucAoDuongDau(a, m, n));
	return 0;
}

void Nhap(SOPHUC& x)
{
	cout << "Nhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << "\nThuc: " << x.Thuc;
	cout << "\nAo  : " << x.Ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: \n";
			Nhap(a[i][j]);
		}
}

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "]: ";
			Xuat(a[i][j]);
		}
}

int KtDuong(SOPHUC x)
{
	if (x.Thuc > 0 && x.Ao > 0)
		return 1;
	return 0;
}

SOPHUC ThucAoDuongDau(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtDuong(a[i][j]) == 1)
				return a[i][j];
	return { 0, 0 };
}