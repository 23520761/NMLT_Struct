#include<iostream>

using namespace std;

struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef HonSo HONSO;

void Nhap(HONSO&, HONSO&);
int RutGon(int, int);
void Tong(HONSO, HONSO);

int main()
{
	HONSO a, b;
	Nhap(a, b);
	Tong(a, b);
	return 0;
}

void Nhap(HONSO& a, HONSO& b)
{
	cout << "Nhap hon so thu nhat " << endl;
	cout << "Nhap phan nguyen : ";
	cin >> a.Nguyen;
	cout << "Nhap phan tu : ";
	cin >> a.Tu;
	cout << "Nhap phan mau : ";
	cin >> a.Mau;
	cout << "\nNhap hon so thu hai " << endl;
	cout << "Nhap phan nguyen : ";
	cin >> b.Nguyen;
	cout << "Nhap phan tu : ";
	cin >> b.Tu;
	cout << "Nhap phan mau : ";
	cin >> b.Mau;
}

int RutGon(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a + b;
}

void Tong(HONSO a, HONSO b)
{
	int pn = a.Nguyen + b.Nguyen;
	int pt = a.Tu * b.Mau + b.Tu * a.Mau;
	int pm = a.Mau * b.Mau;
	int kq = RutGon(pt, pm);
	pt = pt / kq;
	pm = pm / kq;
}