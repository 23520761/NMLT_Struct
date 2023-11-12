#include<iostream>
using namespace std;
struct HonSo
{
	int Nguyen;
	int Tu;
	int Mau;
};
typedef HonSo HONSO;

void Nhap(HONSO&);
int RutGon(int, int);

int main()
{
	HONSO a;
	Nhap(a);
	if (RutGon(a.Tu, a.Mau) == 1)
		cout << "Hon so da toi gian ";
	else
		cout << "Hon so chua toi gian ";
	return 0;
}

void Nhap(HONSO& a)
{
	cout << "Nhap hon so thu nhat " << endl;
	cout << "Nhap phan nguyen : ";
	cin >> a.Nguyen;
	cout << "Nhap phan tu : ";
	cin >> a.Tu;
	cout << "Nhap phan mau : ";
	cin >> a.Mau;
}

int RutGon(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a * b != 0)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	int flag= a + b;
	if (flag == 1)
		return 1;
	return 0;
}
