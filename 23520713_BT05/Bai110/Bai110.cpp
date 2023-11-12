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
void Xuat(NGAY);

int main()
{
	NGAY a;
	Nhap(a);
	Xuat(a);
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

void Xuat(Ngay a)
{
	cout << a.Day << "/" << a.Month << "/" << a.Year;
}