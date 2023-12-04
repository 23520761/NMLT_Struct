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
void Nhap(NGAY[], int&);
void Xuat(NGAY[], int);
bool isNhuan(int);
int SoNgayTrongThang(int, int);
void XaNhauNhat(NGAY[], int, NGAY&, NGAY&);
int KhoangCach(NGAY, NGAY);
int SoThuTu(NGAY);
int SoNgayToiDaTrongNam(NGAY);
int SoThuTuTrongNam(NGAY);

int main()
{
	NGAY g[500], x, y;
	int k;
	Nhap(g, k);
	cout << endl;
	XaNhauNhat(g, k, x, y);
	return 1;
}

void XaNhauNhat(NGAY a[], int n, NGAY& x, NGAY& y)
{
	x = a[0];
	y = a[1];
	for (int i=0;i<=n-2;i++)
		for (int j=i+1;j<n-1;j++)
			if (KhoangCach(a[i], a[j]) > KhoangCach(x, y))
			{
				x = a[i];
				y = a[j];
			}
}

int KhoangCach(NGAY x, NGAY y)
{
	int a = SoThuTu(x);
	int b = SoThuTu(y);
	return abs(a - b);
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
		stt += SoNgayTrongThang(i, x.Nam);
	}
	return (stt + x.Ngay);
}

int SoNgayToiDaTrongNam(NGAY x)
{
	if (isNhuan(x.Nam))
		return 366;
	return 365;
}

int SoNgayTrongThang(int i, int nam)
{
	if (i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
		return 31;
	else if (i == 2 && isNhuan(nam))
		return 29;
	else if (i == 2 && !isNhuan(nam))
		return 28;
	else
		return 30;
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

void Nhap(NGAY a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay thu A[" << i << "]:\n";
		Nhap(a[i]);
	}
}

void Xuat(NGAY a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Ngay a[" << i << "]:";
		Xuat(a[i]);
		cout << endl;
	}
}