#include<iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);

void Nhap(PHANSO[], int&);

int main()
{
	PHANSO a[500];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu ";
	cin >> a.Tu;
	cout << "Nhap mau ";
	cin >> a.Mau;
}

void Nhap(PHANSO a[500], int& n)
{
	cout << "Nhap so phan so can nhap ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan so thu " << i + 1<<" "<<endl;
		Nhap(a[i]);
	}
}

