#include<iostream>
#include<iomanip>
using namespace std;

struct dathuc
{
	int n;
	float a[100];
};
typedef struct dathuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int LonNhat(int, int);
void GiamBac(DATHUC&);
DATHUC Hieu(DATHUC, DATHUC);

void Nhap(DATHUC& f)
{
	cout << "Nhap n: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap a[" << i << "]:";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(10) << "(" << f.a[i] << ")";
		cout << "x^" << i << "+";
	}
	cout << setw(10) << "(" << f.a[0] << ")";
}

int LonNhat(int a, int b)
{
	int max = a;
	if (b > max)
		max = b;
	return max;
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

DATHUC Hieu(DATHUC f, DATHUC g)
{
	for (int i = g.n; i >= 0; i--)
		g.a[i] = -g.a[i];
	return Tong(f, g);
}

int main()
{
	DATHUC dt1, dt2;

	cout << "Tao dt1:" << endl;
	cout << "Nhap he so:" << endl;
	Nhap(dt1);
	cout << "Ta duoc dt1:" << endl;
	Xuat(dt1);

	cout << endl;

	cout << "Tao dt2:" << endl;
	cout << "Nhap he so:" << endl;
	Nhap(dt2);
	cout << "Ta duoc dt2:" << endl;
	Xuat(dt2);

	DATHUC hieu;
	hieu = Hieu(dt1, dt2);
	cout << "Hieu 2 da thuc:";
	Xuat(hieu);
	return 0;
}

