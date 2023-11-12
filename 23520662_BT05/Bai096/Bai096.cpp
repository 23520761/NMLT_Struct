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
void isNhuan(NGAY);

int main()
{
	NGAY g;
	Nhap(g);
	Xuat(g);
	isNhuan(g);
	return 1;
}

void isNhuan(NGAY g)
{
	if ((g.Nam % 4 == 0 && g.Nam % 100 != 0) || (g.Nam % 400 == 0))
		cout << "\nNam nay co 366 ngay";
	else
		cout << "\nNam nay co 365 ngay";
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
