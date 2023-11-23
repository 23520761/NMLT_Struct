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

int main()
{
	DATHUC dt;
	cout << "Tao dt:" << endl;
	Nhap(dt);
	cout << "Ta duoc dt1:" << endl;
	Xuat(dt);
	return 0;
}

