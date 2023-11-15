#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ma trận tọa độ điểm
	// Bai224: Đếm số lượng điểm trong ma trận thuộc đường tròn

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);

void Nhap(DUONGTRON[][100], int&, int&);
void Xuat(DUONGTRON[][100], int, int);

float Khoangcach(DIEM, DIEM);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);

int main()
{
	int m;
	int n;
	DIEM P[100][100];
	DUONGTRON cc[100][100];
	DUONGTRON c;
	cout << "Nhap diem: " << endl;
	Nhap(c);
	Nhap(cc, m, n);
	cout << "\nCac diem vua nhap: ";
	Xuat(cc, m, n);
	cout << "Diem vua nhap: ";
	Xuat(c);
	cout << endl;
	int kq = DemDiem(P, m, n, c);
	cout << "\nSo luong diem thuoc duong tron: " << kq;
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
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam I: ";
	Nhap(c.I);
	cout << "Nhap ban kinh R: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh R: " << c.R;
}

void Nhap(DUONGTRON cc[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]: \n";
			Nhap(cc[i][j]);
		}
}

void Xuat(DUONGTRON cc[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\na[" << i << "][" << j << "]: ";
			Xuat(cc[i][j]);
		}
}

float KhoangCach(DIEM P, DIEM Q)
{
	float kc = sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
	return kc;
}

int KtThuoc(DUONGTRON c1, DIEM P)
{
	float kc = KhoangCach(c1.I, P);
	if (kc <= c1.R)
		return 1;
	return 0;
}

int DemDiem(DIEM P[][100], int m, int n, DUONGTRON c1)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (KtThuoc(c1, P[i][j]) == 1)
				dem++;
	return dem;
}