#include<iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC a;
	Nhap(a);
	Xuat(a);
	return 0;	
}

void Nhap(SOPHUC& a)
{
	cout << "Nhap phan thuc : ";
	cin >> a.Thuc;
	cout << "Nhap phan ao : ";
	cin >> a.Ao;
}

void Xuat(SOPHUC a)
{
	cout << "So thuc da nhap la " << a.Thuc << "+" << a.Ao << "i";
}