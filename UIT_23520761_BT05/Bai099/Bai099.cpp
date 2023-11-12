#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
// Chủ đề hỗn số - Mixed Numbers
// Bai080: Qui đồng hai hỗn số
// Hỗn số mới:
// Phần nguyên mới = giữ nguyên
// Tử mới = tử A * mẫu B || tử B * mẫu A
// Mẫu mới = mẫu A * mẫu B 

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
void QuiDong(HONSO&, HONSO&);

int main()
{
	HONSO A, B;
	cout << "Nhap hon so thu 1: ";
	Nhap(A);
	cout << "Nhap hon so thu 2: ";
	Nhap(B);
	cout << "\nHon so thu 1: ";
	Xuat(A);
	cout << "\nHon so thu 2: ";
	Xuat(B);

	QuiDong(A, B);
	cout << "\n\nHon so A va B sau khi qui dong: ";
	cout << "\nHon so thu 1: ";
	Xuat(A);
	cout << "\nHon so thu 2: ";
	Xuat(B);
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

void QuiDong(HONSO& x, HONSO& y)
{
	// bc: bội chung.
	int bc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = y.Tu * x.Mau;
	x.Mau = bc;
	y.Mau = bc;
}