#include <iostream>
using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);
NGAY TruocDo(NGAY, int);
NGAY TruocDo(NGAY);
NGAY TimNgay(int);
int SoNgayToiDaTrongNam(NGAY);
int SoNgayToiDaTrongThang(NGAY);
int SoThuTu(NGAY);
int SoThuTuTrongNam(NGAY);
bool isNhuan(int);

int main()
{
	NGAY g;
	int k;
	Nhap(g);
	Xuat(g);
	cout << "\nNhap so k: ";
	cin >> k;
	Xuat(TruocDo(g, k));
	return 1;
}

int SoNgayToiDaTrongThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30,31, 31, 30, 31, 30, 31 };
	if (isNhuan(x.Nam))
		ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

NGAY TruocDo(NGAY x, int k)
{
	NGAY temp = x;
	for (int i = 1; i <= k; i++)
	{
		temp = TruocDo(temp);
	}
	return temp;
}


NGAY TruocDo(NGAY x)
{
	if (x.Ngay == 1 && x.Thang == 1 && x.Nam == 1)
		return x;
	int stt = SoThuTu(x);
	stt = stt - 1;
	return TimNgay(stt);
}

int SoThuTu(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Nam - 1; i++)
	{
		NGAY temp = { 1,1,i };
		stt = stt + SoNgayToiDaTrongNam(temp);
	}
	return (stt + SoThuTuTrongNam(x));
}

int SoThuTuTrongNam(NGAY x)
{
	int stt = 0;
	for (int i = 1; i <= x.Thang - 1; i++)
	{
		NGAY temp = { 1,i,x.Nam };
		stt += SoNgayToiDaTrongThang(temp);
	}
	return (stt + x.Ngay);
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (isNhuan(x.Nam))
		return 366;
	return 365;
}

NGAY TimNgay(int nam, int stt)
{
	NGAY temp = { 1,1,nam };
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
	int nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		nam++;
		NGAY temp = { 1,1,nam };
		sn = SoNgayToiDaTrongNam(temp);
	}
	return TimNgay(nam, stt);
}

bool isNhuan(int g)
{
	if ((g % 4 == 0 && g % 100 != 0) || (g % 400 == 0))
		return true;
	else
		return false;
}
void Nhap(NGAY& f)
{
	cout << "Nhap Ngay: ";
	cin >> f.Ngay;
	cout << "Nhap Thang: ";
	cin >> f.Thang;
	cout << "Nhap Nam: ";
	cin >> f.Nam;
}

void Xuat(NGAY f)
{
	cout << "\nNgay la: ";
	cout << f.Ngay << "/" << f.Thang << "/" << f.Nam;
}
