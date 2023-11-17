#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
// Chủ đề: Đa thức
// Bai164: Tính đa thức dư của phép chia đa thức thứ nhất cho đa thức thứ 2

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

DATHUC operator+(DATHUC, DATHUC);
DATHUC operator-(DATHUC, DATHUC);
DATHUC operator*(DATHUC, DATHUC);
DATHUC operator/(DATHUC, DATHUC);

DATHUC ThuongLayDu(DATHUC, DATHUC);

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

	cout << "\nDa thuc du cua phep chia da thuc F(x) va G(x): ";
	Xuat(ThuongLayDu(ff, gg));


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

DATHUC operator+(DATHUC f, DATHUC g)
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


DATHUC operator-(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
		g.a[i] = -g.a[i];
	return f + g;
}

DATHUC operator*(DATHUC f, DATHUC g)
{
	DATHUC temp;
	temp.n = f.n + g.n;
	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;
	
	for (int i = 0; i <= g.n; i++)
		for (int j = 0; j <= f.n; j++)
			temp.a[i + j] += g.a[i] * f.a[i];
	return temp;
}

DATHUC operator/(DATHUC f, DATHUC g)
{
	DATHUC bichia = f;
	DATHUC chia = g;
	DATHUC temp;
	temp.n = f.n - g.n;

	for (int i = temp.n; i >= 0; i--)
		temp.a[i] = 0;

	while (bichia.n >= chia.n)
	{
		DATHUC tg;
		tg.n = bichia.n - chia.n;
		for (int i = tg.n; i >= 0; i--)
			tg.a[i] = 0;
		tg.a[tg.n] = bichia.a[bichia.n] / chia.a[chia.n];
		DATHUC tru = tg * chia;
		bichia = bichia - tru;
		temp = temp + tg;
	}
	return temp;
}

DATHUC ThuongLayDu(DATHUC f, DATHUC g)
{
	DATHUC thuong = f / g;
	DATHUC du = f - g * thuong;
	return du;
}