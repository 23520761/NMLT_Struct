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
int SoThuTu(NGAY);

int main()
{
	NGAY g;
	Nhap(g);
	Xuat(g);
	cout << "\nSo thu tu la: " << SoThuTu(g);
	return 1;
}

int SoThuTu(NGAY g)
{
	int S = 0;
	for (int i = 2; i <= g.Nam; i++)
	{
		if (isNhuan(i))
			S = S + 366;
		else
			S = S + 365;
	}
	for (int i = 3; i <= g.Thang; i++)
	{

		if (i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
			S = S + 31;
		else
			S = S + 30;
	}
	if (g.Thang >= 2)
	{
		if (isNhuan(g.Nam))
			S = S + 29;
		else
			S = S + 28;
	}
	S = S + g.Ngay;
	return S;
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
