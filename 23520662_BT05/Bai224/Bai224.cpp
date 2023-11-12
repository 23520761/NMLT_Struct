#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	int x;
	int y;
};
typedef struct DIEM DIEM;

struct duongtron
{
	DIEM I;
	float R;
};
typedef struct duongtron DUONGTRON;

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
int ktThuoc(DUONGTRON, DIEM);
int DemDiem(DIEM[][100], int, int, DUONGTRON);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM ln[100][100];
	DUONGTRON O;
	int i, j;
	Nhap(ln, i, j);
	Nhap(O);
	cout << "\nDiem vua nhap:";
	Xuat(ln, i, j);
	cout << "\nDuong tron vua nhap:";
	Xuat(O);
	cout << "\nSo luong diem thuoc duong tron la:";
	cout << DemDiem(ln, i, j, O);
	return 1;
}

int ktThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}

int DemDiem(DIEM a[][100], int m, int n, DUONGTRON c)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc(c, a[i][j]))
				dem++;
	return dem;
}

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((P.x - Q.x) * (P.x - Q.x) + (P.y - Q.y) * (P.y - Q.y));
}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}

void Xuat(DIEM l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
	cout << "Nhap so hang: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "]:\n";
			Nhap(a[i][j]);
		}
}

void Xuat(DIEM a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(DUONGTRON c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}