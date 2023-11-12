#include<iostream>

using namespace std;

struct DonThuc
{
	int a;
	int n;
};
typedef DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);

int main()
{
	DONTHUC a;
	Nhap(a);
	return 0;
}

void Nhap(DONTHUC& a)
{
	cout << "Nhap he so ";
	cin >> a.a;
	cout << "Nhap bac";
	cin >> a.n;
}