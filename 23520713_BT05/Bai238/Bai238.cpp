#include<iostream>

using namespace std;

struct PhanSo
{
	float Tu, Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[][100], int&, int&);
float NhoNhat(PHANSO[][100], int, int);
int Dem(PHANSO[][100], int, int);

int main()
{
	PHANSO a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << Dem(a, m, n);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu ";
	cin >> a.Tu;
	cout << "Nhap mau ";
	cin >> a.Mau;
}

void Nhap(PHANSO a[][100], int& m, int& n)
{
	cout << "Nhap hang ";
	cin >> m;
	cout << "Nhap cot ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "\nNhap A(" << i << "," << j << ")" << endl;
			Nhap(a[i][j]);
		}
}

float NhoNhat(PHANSO a[][100], int m, int n)
{
	PHANSO lc = a[0][0];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc.Tu / lc.Mau > a[i][j].Tu / a[i][j].Mau)
				lc = a[i][j];
	return (float)lc.Tu / lc.Mau;
}

int Dem(PHANSO a[][100], int  m, int n)
{
	int dem = 0;
	float lc = NhoNhat(a, m, n);
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (lc == a[i][j].Tu / a[i][j].Mau)
				dem++;
	return dem;
}