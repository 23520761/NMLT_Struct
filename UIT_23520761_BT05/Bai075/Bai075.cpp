#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề: Phân số - Fraction
	// Bai056: Quy đồng hai phân số

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void QuiDongMau(PHANSO&, PHANSO&);

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
	QuiDongMau(A, B);
	cout << endl;
	cout << "\nPhan so thu 1 sau khi quy dong: ";
	Xuat(A);
	cout << "\nPhan so thu 2 sau khi quy dong: ";
	Xuat(B);

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

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	// mc: mẫu chung
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = y.Tu * x.Mau;
	x.Mau = mc;
	y.Mau = mc;
}