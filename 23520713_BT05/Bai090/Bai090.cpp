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

int main()
{
	HONSO hs;
	Nhap(hs);
	return 0;
}

void Nhap(HONSO& a)
{
	cout << "Nhap phan nguyen : ";
	cin >> a.Nguyen;
	cout << "Nhap phan tu : ";
	cin >> a.Tu;
	cout << "Nhap phan mau : ";
	cin >> a.Mau;
}