#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề hỗn số - Mixed Numbers
	// Bai072: Định nghĩa hàm nhập hỗn số

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO A;
	cout << "Nhap hon so: ";
	Nhap(A);
	cout << "\nHon so: ";
	Xuat(A);
	return 1;
}

void Nhap(HONSO& x)
{
	cout << "\nNhap nguyen: ";
	cin >> x.Nguyen;
	cout << "Nhap tu: ";
	cin >> x.Tu;
	cout << "Nhap mau: ";
	cin >> x.Mau;
}

void Xuat(HONSO x)
{
	cout << "\nNguyen = " << x.Nguyen;
	cout << "\nTu     = " << x.Tu;
	cout << "\nMau    = " << x.Mau;
}