#include<iostream>

using namespace std;

struct SoPhuc
{
	float Thuc, Ao;
};
typedef SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Nhap(SOPHUC[][100], int& m, int& n);
int KiemTra(SOPHUC[][100], int m, int n, int d);
int Dem(SOPHUC[][100], int, int);

int main()
{
	SOPHUC a[100][100];
	int m, n;
	Nhap(a, m, n);
	cout << Dem(a, m, n);
	return 0;
}

void Nhap(SOPHUC& a)
{
	cout << "Nhap phan thuc ";
	cin >> a.Thuc;
	cout << "Nhap phan ao ";
	cin >> a.Ao;
}

void Nhap(SOPHUC a[][100], int& m, int& n)
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

int KiemTra(SOPHUC a[][100], int m, int n, int d)
{
	int lc = 1;
	for (int j = 0; j < n; j++)
		if (a[d][j].Thuc * a[d][j + 1].Ao > 0)
			return 0;
	return lc;
}

int Dem(SOPHUC a[][100], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < m; i++)
		if (KiemTra(a, m, n, i) == 1)
			dem++;
	return dem;
}

