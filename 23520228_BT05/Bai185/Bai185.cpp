#include<iostream>
#include<iomanip>
using namespace std;

struct phanso
{
	float tu;
	float mau;
};
typedef struct phanso PHANSO;

void Nhap(PHANSO&);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO);
void Xuat(PHANSO[], int);

PHANSO LonNhat(PHANSO[], int);

void Nhap(PHANSO& l)
{
	cout << "Nhap tu: ";
	cin >> l.tu;
	cout << "Nhap mau: ";
	cin >> l.mau;
}

void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu" << i + 1 << ": \n";
		Nhap(a[i]);
	}
}

void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}

void Xuat(PHANSO l)
{
	cout << l.tu << "/" << l.mau << endl;
}

int SoSanh(PHANSO x, PHANSO y)
{
	if (x.tu*y.mau > y.tu*x.mau)
		return 1;
	if (x.tu * y.mau < y.tu * x.mau)
		return 0;
	if (x.tu * y.mau == y.tu * x.mau)
		return -1;
}

PHANSO LonNhat(PHANSO a[], int n)
{
	PHANSO lc = a[0];
	for (int i = 0; i < n; i++)
		if (SoSanh(a[i], lc) == 1)
			lc = a[i];
	return lc;
}

int main()
{
	PHANSO ln[500];
	int n;
	Nhap(ln, n);
	cout << "\nPhan so vua nhap: \n";
	Xuat(ln, n);
	cout << "Phan so lon nhat trong mang: ";
	Xuat(LonNhat(ln, n));
	return 1;
}