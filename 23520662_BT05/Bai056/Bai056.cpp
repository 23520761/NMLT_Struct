#include <iostream>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void QuiDongMau(PHANSO&, PHANSO&);

int main()
{
	PHANSO g, e;
	Nhap(g);
	Xuat(g);
	cout << endl << endl;
	Nhap(e);
	Xuat(e);
	cout << "\nSau khi qui dong la: ";
	QuiDongMau(g, e);
	Xuat(g);
	Xuat(e);
	return 1;
}

void QuiDongMau(PHANSO& x, PHANSO& y)
{
	int mc = x.Mau * y.Mau;
	x.Tu = x.Tu * y.Mau;
	y.Tu = x.Mau * y.Tu;
	x.Mau = mc;
	y.Mau = mc;
}

void Nhap(PHANSO& f)
{
	cout << "Nhap tu: ";
	cin >> f.Tu;
	cout << "Nhap mau: ";
	cin >> f.Mau;
}

void Xuat(PHANSO f)
{
	cout << "\nPhan so la: " << f.Tu << "/" << f.Mau;
}
