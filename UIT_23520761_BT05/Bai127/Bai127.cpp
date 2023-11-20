#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ngày
	// Bai108: Tìm ngày trước đó k ngày.

	/*
		Ý tưởng:
		B1: Nhập ngày cần xét
		B2: Tìm số thứ tự từ ngày 01/01/01 đến trước ngày cần xét 1 ngày
		B3: Lập hàm tìm ngày khi biết số thứ tự
			+ Phải có hàm tìm ngày khi biết năm và số thứ tự trong năm
			+ Phải có hàm tính số ngày tối đa trong năm
			+ Hàm tính số ngày tối đa trong mỗi tháng
			+ Hàm Kiểm tra năm nhuận
		B4: hàm tìm k ngày bằng cách duyệt qua vòng for từ 1 => k ngày gọi lại hàm 1 ngày trước đó
	*/
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
int SoNgayToiDaTrongThang(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);
int SoThuTu(NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay(int);
NGAY TruocDo(NGAY);
NGAY TruocDo(NGAY, int);

int main()
{
	NGAY d;
	int k;
	Nhap(d);
	cout << "Nhap so ngay can tim truoc do: ";
	cin >> k;
	cout << "\nNgay vua nhap: ";
	Xuat(d);

	cout << "\n\nNgay truoc do " << k << " ngay: ";
	Xuat(TruocDo(d, k));

	return 0;
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
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

int KtNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (KtNhuan(x) == 1)
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1, i, x.Nam };
		stt = stt + SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1, 1, i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1, 1, Nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaTrongThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaTrongThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int Nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		Nam++;
		NGAY temp = { 1, 1, Nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(Nam, stt);
}

NGAY TruocDo(NGAY x)
{
	if (x.Ngay == 1 && x.Thang == 1 && x.Nam == 1)
		return x;
	int stt = SoThuTu(x);
	stt = stt - 1;
	return TimNgay(stt);
}

NGAY TruocDo(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
		temp = TruocDo(temp);
	return temp;
}

