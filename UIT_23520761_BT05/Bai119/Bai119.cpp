#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ngày
	// Bai100: Tính số thứ tự ngày kể từ ngày 01/01/01
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
int SoThuTu(NGAY);

int main()
{
	NGAY d;
	Nhap(d);
	cout << "\nNgay vua nhap:";
	Xuat(d);

	int stt = SoThuTu(d);
	cout << "So thu tu ngay ke tu ngay 01/01/01" << stt << " ngay.";
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

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1, 1, i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoNgayToiDaTrongNam(x));
}