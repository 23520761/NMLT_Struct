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
int timUCLN(int, int);
HONSO Hieu(HONSO, HONSO);
HONSO rutGonPhanSo(HONSO);

int main()
{
	HONSO g, e;
	Nhap(e);
	Nhap(g);
	Xuat(Hieu(g, e));
	return 1;
}

HONSO Hieu(HONSO x, HONSO y)
{
	HONSO temp;
	temp.Nguyen = x.Nguyen - y.Nguyen;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	rutGonPhanSo(temp);
	return temp;
}

int timUCLN(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

HONSO rutGonPhanSo(HONSO ps)
{
	int ucln = timUCLN(ps.Tu, ps.Mau);
	ps.Tu /= ucln;
	ps.Mau /= ucln;
	return ps;
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
