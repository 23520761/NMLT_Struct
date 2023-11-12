#include<iostream>

using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);

void Nhap(PHANSO[], int&);

void KiemTra(PHANSO&, PHANSO&);

void Xuat(PHANSO[], int);

int main()
{
	PHANSO a[500];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(PHANSO& a)
{
	cout << "Nhap tu ";
	cin >> a.Tu;
	cout << "Nhap mau ";
	cin >> a.Mau;
}

void Xuat(PHANSO a)
{
	cout << a.Tu << "/" << a.Mau << " ";
}

void Nhap(PHANSO a[500], int& n)
{
	cout << "Nhap so phan so can nhap ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap phan so thu " << i + 1 << " " << endl;
		Nhap(a[i]);
	}
}

void KiemTra(PHANSO& a, PHANSO& b)
{
	if ((float)a.Tu / a.Mau > (float)b.Tu / b.Mau)
	{
		PHANSO temp = a;
		a = b;
		b = temp;
	}
}

void Xuat(PHANSO a[500], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			KiemTra(a[i], a[j]);
		}
	}
	for (int i = 0; i < n; i++)
		cout << a[i].Tu << "/" << a[i].Mau << " ";
}
