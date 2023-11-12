#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề: Phân số - Fraction
	// Bai052: Kiểm tra phân số có nghĩa: mẫu khác không

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
int KtCoNghia(PHANSO);

int main()
{
	PHANSO A;
	cout << "Nhap phan so: ";
	Nhap(A);
	cout << "\nPhan so A co dang: ";
	Xuat(A);
	int kq = KtCoNghia(A);
	if (kq == 1)
		cout << "\nPhan so A co nghia.";
	else
		cout << "\nPhan so A khong co nghia.";
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

int KtCoNghia(PHANSO x)
{
	if (x.Mau != 0)
		return 1;
	return 0;
}