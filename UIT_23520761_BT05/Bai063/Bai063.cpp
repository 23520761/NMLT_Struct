#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề: Phân số - Fraction
	// Bai044: Khai báo kiểu dữ liệu biểu diễn phân số

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

int main()
{
	PHANSO A;
	cout << "Nhap phan so A: ";
	Nhap(A);
	cout << "\nPhan so A co dang: ";
	Xuat(A);

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