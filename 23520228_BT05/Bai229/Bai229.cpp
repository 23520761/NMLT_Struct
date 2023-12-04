#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[][100], int&, int&);
void Xuat(PHANSO[][100], int, int);

PHANSO LonNhat(PHANSO[][100], int, int);

int main()
{
	PHANSO ln[100][100];
	int i, j;
	Nhap(ln, i, j);
	cout << "\nPhan so vua nhap: \n";
	Xuat(ln, i, j);
	return 1;
}

void Nhap(PHANSO& l)
{
	cout << "Nhap x: ";
	cin >> l.Tu;
	cout << "Nhap y: ";
	cin >> l.Mau;
}

void Xuat(PHANSO l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << l.Tu << "/" << l.Mau << endl;
}

void Nhap(PHANSO a[][100], int& m, int& n)
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

void Xuat(PHANSO a[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Diem A[" << i << "][" << j << "]:";
			Xuat(a[i][j]);
			cout << endl;
		}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}


PHANSO LonNhat(PHANSO a[][100], int m, int n)
{
	PHANSO MAX = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (SoSanh(a[i][j], MAX) == 1)
				MAX = a[i][j];
	return MAX;
}