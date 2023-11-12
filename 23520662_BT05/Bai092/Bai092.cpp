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

int main()
{
	NGAY g;
	Nhap(g);
	Xuat(g);
	return 1;
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
