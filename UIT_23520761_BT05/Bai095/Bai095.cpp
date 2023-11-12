#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
	// Chủ đề hỗn số - Mixed Numbers
	// Bai076: Hiệu hai hỗn số
	// Hỗn số mới:
	// Phần nguyên mới = phần nguyên hỗn số A - phần nguyên hỗn số B
	// Tử mới = tử A * mẫu B - tử B * mẫu A;
	// Mẫu mới = mẫu A * mẫu B
	// rút gọn(hỗn số mới):
	// Bước 1: tìm ULCN của tử và mẫu
	// Bước 2: tử mới = tử / UCLN, mẫu mới = mẫu / UCLN
	// Bước 3: phần nguyên = phân nguyên ban đầu + tử mới / mẫu mới
	// Bước 4: tử mới 2 = tử mới % mẫu mới (lấy phần nguyên)
struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
int UCLN(int, int);
void RutHon(HONSO&);
HONSO Hieu(HONSO, HONSO);

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
	cout << "\nHieu 2 hon so A va B: ";
	Xuat(Hieu(A, B));
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

int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}

void RutGon(HONSO& x)
{
	int kq = UCLN(x.Tu, x.Mau);
	x.Tu = x.Tu / kq;
	x.Mau = x.Mau / kq;
	x.Nguyen = x.Nguyen + x.Tu / x.Mau;
	x.Tu = x.Tu % x.Mau;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	return temp;
}