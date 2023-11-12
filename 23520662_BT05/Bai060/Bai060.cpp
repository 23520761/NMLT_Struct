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
PHANSO operator-(PHANSO, PHANSO);
int timUCLN(int, int);
PHANSO rutGonPhanSo(PHANSO);

int main()
{
	PHANSO g, e;
	Nhap(g);
	Nhap(e);
	PHANSO hieu;
	hieu = g - e;
	Xuat(hieu);
	return 1;
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

PHANSO rutGonPhanSo(PHANSO ps)
{
	int ucln = timUCLN(ps.Tu, ps.Mau);
	ps.Tu /= ucln;
	ps.Mau /= ucln;
	return ps;
}
PHANSO operator-(PHANSO x, PHANSO y)
{
	PHANSO temp;
	temp.Tu = x.Tu * y.Mau - y.Tu * x.Mau;
	temp.Mau = x.Mau * y.Mau;
	rutGonPhanSo(temp);
	return temp;
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
