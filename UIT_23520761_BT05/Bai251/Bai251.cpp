#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ma trận phân số
	// Bai232: Sắp xếp ma trận tăng dần từ trái sang phải và từ trên xuống dưới	

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

int SoSanh(PHANSO, PHANSO);
void HoanVi(PHANSO&, PHANSO&);
void SapTang(PHANSO[][100], int, int);

int main()
{
	int m;
	int n;
	PHANSO PS[100][100];
	Nhap(PS, m, n);
	cout << "Cac phan so vua nhap: \n";
	Xuat(PS, m, n);
	SapTang(PS, m, n);
	return 0;
}

void Nhap(PHANSO& x)
{
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu : " << x.Tu;
	cout << "\nMau: " << x.Mau;
}

void Nhap(PHANSO PS[][100], int& m, int& n)
{
	cout << "Nhap so dong: ";
	cin >> m;
	cout << "Nhap so cot: ";
	cin >> n;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: \n";
			Nhap(PS[i][j]);
		}
}

void Xuat(PHANSO PS[][100], int m, int n)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			Xuat(PS[i][j]);
		}
}

int SoSanh(PHANSO x, PHANSO y)
{
	float a = (float)x.Tu / x.Mau;
	float b = (float)y.Tu / y.Mau;
	if (a < b)
		// Nếu phân số 1 nhỏ hơn phân số 2 => true
		return 1;
	return 0;
}

void HoanVi(PHANSO& x, PHANSO& y)
{
	PHANSO temp = x;
	x = y;
	y = temp;
}

void SapTang(PHANSO PS[][100], int m, int n)
{
	for (int i = 0; i <= m - 2; i++)
		for (int j = 0; j <= n - 1; j++)
			// Nếu so sánh = 0 => a > b thì hoán vị
			if (SoSanh(PS[i / m][i % m], PS[j / n][j % n]) == 0)
				HoanVi(PS[i / m][i % m], PS[j / n][j % n]);
}