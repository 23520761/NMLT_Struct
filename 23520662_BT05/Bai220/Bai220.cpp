#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	int x;
	int y;
};
typedef struct DIEM DIEM;

bool ktThuoc3(DIEM);
void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[][100], int&, int&);
void Xuat(DIEM[][100], int, int);
int DemThuoc3(DIEM[][100], int, int);

int main()
{
	DIEM ln[100][100];
	int i, j;
	Nhap(ln, i, j);
	cout << "\nDiem vua nhap:";
	Xuat(ln, i, j);
	cout << "\nSo diem thuoc goc phan tu so 3 la: ";
	cout << DemThuoc3(ln, i, j);
	return 1;
}

int DemThuoc3(DIEM a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktThuoc3(a[i][j]))
				dem++;
	return dem;
}


bool ktThuoc3(DIEM P)
{
	if (P.x < 0 && P.y < 0)
		return true;
	else
		return false;

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