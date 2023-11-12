#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Mau;
	int Tu;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);
void QuiDongMau(HONSO&, HONSO&);

int main()
{
	HONSO g, e;
	Nhap(e);
	Nhap(g);
	QuiDongMau(g, e);
	cout << "\nSau khi qui dong: ";
	cout << "\na: ";
	Xuat(g);
	cout << "\nb: ";
	Xuat(e);
	return 1;
}

void QuiDongMau(HONSO& x, HONSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}


void Nhap(HONSO& f)
{
	cout << "Nhap phan Nguyen: ";
	cin >> f.Nguyen;
	cout << "Nhap phan Tu: ";
	cin >> f.Tu;
	cout << "Nhap phan Mau: ";
	cin >> f.Mau;
}

void Xuat(HONSO f)
{
	cout << "\nHon so la: " << f.Nguyen << "(" << f.Tu << "/" << f.Mau << ")";
}
