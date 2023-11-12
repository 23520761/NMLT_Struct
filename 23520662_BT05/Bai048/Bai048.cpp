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
PHANSO tinhTong(PHANSO, PHANSO);
int timUCLN(int, int);
PHANSO rutGonPhanSo(PHANSO);

int main()
{
	PHANSO g, e;
	Nhap(g);
	Xuat(g);
	cout << endl << endl;
	Nhap(e);
	Xuat(e);
	cout << "\nTong 2 phan so la: " << rutGonPhanSo(tinhTong(g, e)).Tu << "/" << rutGonPhanSo(tinhTong(g, e)).Mau;
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

PHANSO tinhTong(PHANSO a, PHANSO b)
{
	PHANSO S;
	S.Tu = ((a.Tu * b.Mau) + (b.Tu * a.Mau));
	S.Mau = (a.Mau * b.Mau);
	return S;
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
