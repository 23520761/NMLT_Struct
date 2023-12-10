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

int ktToiGian(PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[], int);
void Xuat(PHANSO[], int);

void LietKe(PHANSO[][100], int, int);


int main()
{
	PHANSO ln[100][100];
	PhanSo ps;
	int i, j;
	Nhap(ln, i, j);
	Xuat(ln, i, j);
	Nhap(ps);
	Xuat(ps);
	LietKe(ln, i, j);
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

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
		if (a > b)
			a = a - b;
		else
			b = b - a;
	return a + b;
}

int ktToiGian(PHANSO x)
{
	if (UCLN(x.Tu, x.Mau) == 1)
		return 1;
	return 0;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp;
	temp = x;
	x = y;
	y = temp;
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)x.Mau / x.Tu;
	if (a > b)
		return 1;
	if (a < b)
		return -1;
	return 0;
}

void SapTang(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 2; i++)
		for (int j = i + 1; j <= n - 1; j++)
			if (SoSanh(a[i], a[j]) == 1)
				HoanVi(a[i], a[j]);
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

void LietKe(PHANSO a[][100], int m, int n)
{
	PHANSO b[1000];
	int k = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (ktToiGian(a[i][j]))
				b[k++] = a[i][j];
	SapTang(b, k);
	Xuat(b, k);
}
