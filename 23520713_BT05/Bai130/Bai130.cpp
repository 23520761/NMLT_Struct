#include<iostream>

using namespace std;

struct DonThuc
{
	int a;
	int n;
};
typedef DonThuc DONTHUC;

void Nhap(DONTHUC&, DONTHUC&);
void Xuat(DONTHUC, DONTHUC);

int main()
{
	DONTHUC a,b;
	Nhap(a,b);
	Xuat(a, b);
	return 0;
}

void Nhap(DONTHUC& a, DONTHUC& b)
{
	cout << "Nhap don thuc thu nhat " << endl;
	cout << "Nhap he so ";
	cin >> a.a;
	cout << "Nhap bac";
	cin >> a.n;
	cout << "\nNhap don thuc thu hai " << endl;
	cout << "Nhap he so ";
	cin >> b.a;
	cout << "Nhap bac";
	cin >> b.n;
}

void Xuat(DONTHUC a, DONTHUC b)
{
	cout << "\n Thuong cua hai don thuc" << endl;
	cout << "He so " << (float)a.a / b.a<<endl;
	cout << "Bac " << (float)a.n / b.n;
}