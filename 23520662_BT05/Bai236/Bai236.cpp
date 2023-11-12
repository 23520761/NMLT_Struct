#include <iostream>
#include <iomanip>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[][100], int&, int&);
void Xuat(SOPHUC[][100], int, int);
SOPHUC firstDuong(SOPHUC[][100], int, int);

int main()
{
	SOPHUC ln[100][100];
	int i, j;
	Nhap(ln, i, j);
	cout << "\nSo phuc vua nhap: \n";
	Xuat(ln, i, j);
	cout << "\nSo phuc duong dau tien la: \n";
	Xuat(firstDuong(ln, i, j));
	return 1;
}

SOPHUC firstDuong(SOPHUC a[][100], int m, int n)
{
	SOPHUC Duong = { 0,0 };
	int flag = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; i < n; j++)
		{
			if (a[i][j].Thuc > 0 && a[i][j].Ao > 0)
			{
				Duong = a[i][j];
				flag = 1;
				break;
			}
		}
		if (flag == 1)
			break;
	}
	return Duong;
}

void Nhap(SOPHUC& l)
{
	cout << "Nhap x: ";
	cin >> l.Thuc;
	cout << "Nhap y: ";
	cin >> l.Ao;
}

void Xuat(SOPHUC l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << l.Thuc << " + " << l.Ao << "i" << endl;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
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

void Xuat(SOPHUC a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}