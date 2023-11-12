#include<iostream>

using namespace std;

struct Ngay
{
	int Day;
	int Month;
	int Year;
};
typedef Ngay NGAY;

void Nhap(NGAY&);
bool NamNhuan(NGAY);
int NgayThang(NGAY);
bool Xuat(NGAY);

int main()
{
	NGAY a;
	Nhap(a);
	if (Xuat(a) == true)
		cout << "Hop le";
	else
		cout << "Khong hop le ";
	return 0;
}

void Nhap(NGAY& a)
{
	cout << "Nhap ngay ";
	cin >> a.Day;
	cout << "Nhap thang ";
	cin >> a.Month;
	cout << "Nhap nam ";
	cin >> a.Year;
}

bool NamNhuan(Ngay a)
{
	if ((a.Year % 4 == 0 && a.Year % 100 != 0) || (a.Year % 400 == 0))
		return true;
	return false;
}

int NgayThang(NGAY a)
{
	int ngaythang[12] = { 31,28,31,30,31,30,31,31,30,31,31,30 };
	if (NamNhuan(a) == true)
		ngaythang[1] = 29;
	return ngaythang[a.Month - 1];
}

bool Xuat(Ngay a)
{
	if (a.Year < 1)
		return false;
	if (a.Month > 12 || a.Month < 0)
		return false;
	if (a.Day > NgayThang(a))
		return false;
	return true;
}