#include<iostream>

using namespace std;

struct DaThuc
{
	float a[500];
	int i;
};
typedef DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC a;
	Nhap(a);
	Xuat(a);
	return 0;
}

void Nhap(DATHUC& a)
{
	cout << "Nhap bac cua da thuc ";
	cin >> a.i;
	for (int i = a.i; i > -1; i--)
	{
		cout << "Nhap he so cua a x bac " << i<<" ";
		cin >> a.a[i];
	}
}

void Xuat(DATHUC a)
{
	for (int i = a.i; i >0; i--)
	{
		cout << a.a[i] << "x^"<<i << "+"<< " ";
	}
	cout << a.a[0];
}