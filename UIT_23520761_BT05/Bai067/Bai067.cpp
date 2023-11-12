#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
	// Chủ đề: Phân số - Fraction
	// Bai048: Tính tổng hai phân số
	// tử phân số mới = tử phẩn số 1 * mẫu phấn số 2 + tử phân số 2 * mẫu phân số 1

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int UCLN(int, int);
void RutGon(PHANSO&);
PHANSO Tong(PHANSO, PHANSO);

int main()
{
	PHANSO A, B;
	cout << "Nhap phan so thu 1: ";
	Nhap(A);
	cout << "Nhap phan so thu 2: ";
	Nhap(B);
	cout << "\nPhan so thu 1: ";
	Xuat(A);
	cout << "\nPhan so thu 2: ";
	Xuat(B);
	cout << "\nTong hai phan so: ";
	Xuat(Tong(A, B));

	return 1;
}

void Nhap(PHANSO& x)
{
	cout << "\nNhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(PHANSO x)
{
	cout << "\nTu  = " << x.Tu;
	cout << "\nMau = " << x.Mau;
}

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
		
}
void RutGon(PHANSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
}

PHANSO Tong(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau + y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	RutGon(temp);
	return temp;
}