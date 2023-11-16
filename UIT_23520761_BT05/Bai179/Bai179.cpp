#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đa thức 
	//Bai160: Tính tổng hai đa thức

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);
int LonNhat(int, int);
void GiamBac(DATHUC&);
DATHUC Tong(DATHUC, DATHUC);

int main()
{
	DATHUC ff, gg;
	cout << "Nhap da thuc F(x): ";
	Nhap(ff);
	cout << "Nhap da thuc G(x): ";
	Nhap(gg);
	cout << "\nDa thuc F(x) vua nhap: ";
	Xuat(ff);
	cout << "\nDa thuc G(x) vua nhap: ";
	Xuat(gg);

	cout << "\nTong cua hai da thuc: ";
	Xuat(Tong(ff, gg));
	cout << "\n\nKet thuc !!!";
	return 1;
}

void Nhap(DATHUC& f)
{
	cout << "\nNhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << f.a[i];
		cout << "x^" << i;
		cout << setw(6);
	}
	cout << f.a[0];
}

int LonNhat(int a, int b)
{
	int lc = a;
	if (b > lc)
		lc = b;
	return lc;
}


void GiamBac(DATHUC& f)
{
	while (f.a[f.n] == 0)
		f.n--;
}

DATHUC Tong(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = LonNhat(f.n, g.n);

	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	for (int i = f.n; i >= 0; i--)
		temp.a[i] += f.a[i];
	for (int i = g.n; i >= 0; i--)
		temp.a[i] += g.a[i];
	GiamBac(temp);
	return temp;
}