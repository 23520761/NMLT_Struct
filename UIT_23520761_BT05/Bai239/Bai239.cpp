#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ma trận tọa độ điểm
	// Bai220: Đếm số lượng điểm trong góc phần tư thứ 3 trong mặt phẳng tọa độ Oxy

struct Diem
{
	float x;
	float y;
};
typedef struct Diem	DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
int KtThuoc3(DIEM);
int DemThuoc3(DIEM[][100], int, int);

int main()
{
	int m;
	int n;
	DIEM matrix[100][100];
	Nhap(matrix, m, n);
	cout << "\ncac diem trong ma tran vua nhap: ";
	Xuat(matrix, m, n);

	int kq = DemThuoc3(matrix, m, n);
	cout << "\nSo diem thuoc goc phan tu thu 3: " << kq;

	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "\n x = " << P.x;
	cout << "\n y = " << P.y;
}

void Nhap(DIEM matrix[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: " << endl;
			Nhap(matrix[i][j]);
		}
}

void Xuat(DIEM matrix[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "]: ";
			Xuat(matrix[i][j]);
		}
}

int KtThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return 1;
	return 0;
}


int DemThuoc3(DIEM matrix[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtThuoc3(matrix[i][j]) == 1)
				dem++;
	return dem;
}
