#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ngày
	// Bai096: định nghĩa hàm tìm số ngày tối đa trong năm
	
struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
int KtNhuan(NGAY);
int SoNgayToiDaTrongNam(NGAY);

int main()
{
	NGAY d;
	Nhap(d);
	cout << "\nNgay vua nhap:";
	Xuat(d);

	int sttNam = SoNgayToiDaTrongNam(d);
	cout << "\nSo ngay toi da trong nam: " << sttNam << " ngay.";
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay : ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam  : ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay : " << x.Ngay;
	cout << "\nThang: " << x.Thang;
	cout << "\nNam  : " << x.Nam;
}

int KtNhuan(NGAY x)
{
	if (x.Nam % 4 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
}