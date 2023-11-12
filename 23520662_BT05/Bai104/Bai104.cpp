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
bool isNhuan(int);
NGAY ngaytheoSTT(int);
int SoNgayTrongThang(int, int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Xuat(ngaytheoSTT(n));
	return 1;
}

NGAY ngaytheoSTT(int n)
{
	int tempnam;
	int Thang = 0, Nam = 1;
	while (n > 0)
	{
		tempnam = n;
		if (isNhuan(Nam))
			n = n - 366;
		else
			n = n - 365;
		Nam++;
	}
	int temp;
	while (tempnam > 0)
	{
		temp = tempnam;
		tempnam = tempnam - SoNgayTrongThang(Thang, Nam);
		Thang++;
	}
	NGAY theDay = { temp,Thang,Nam - 1 };
	return theDay;
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

void Xuat(NGAY f)
{
	cout << "\nNgay la: ";
	cout << f.Ngay << "/" << f.Thang << "/" << f.Nam;
}
