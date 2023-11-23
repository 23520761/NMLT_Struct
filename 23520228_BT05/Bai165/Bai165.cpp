#include<iostream>
#include<iomanip>
using namespace std;

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

DATHUC DAOHAM(DATHUC);

int main()
{
	DATHUC dt;

	cout << "Tao dt:" << endl;
	cout << "Nhap he so:" << endl;
	Nhap(dt);
	cout << "Ta duoc dt:" << endl;
	Xuat(dt);

	cout << endl;

	DATHUC dh;
	dh = DAOHAM(dt);
	cout << "Dao ham bac 1:" << endl;
	Xuat(dh);
	return 0;
}

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

DATHUC DAOHAM(DATHUC f)
{
	DATHUC dh;
	dh.n = f.n - 1;
	dh.a = new float[dh.n];
	for (int i = 0; i < dh.n; i++)
	{
		dh.a[i] = (i + 1) * f.a[i];
	}
	return dh;
}
