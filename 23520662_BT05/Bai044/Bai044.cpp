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

int main()
{
	PHANSO g;
	Nhap(g);
	Xuat(g);
	return 1;
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
