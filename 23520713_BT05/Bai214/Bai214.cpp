#include<iostream>

using namespace std;

struct DuongThang
{
	float a, b, c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Nhap(DUONGTHANG[], int&);

int main()
{
	DUONGTHANG a[500];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(DUONGTHANG& a)
{
	cout << "Nhap he so cua x ";
	cin >> a.a;
	cout << "Nhap he so cua y ";
	cin >> a.b;
	cout << "Nhap he so tu do ";
	cin >> a.c;
}

void Nhap(DUONGTHANG a[500], int& n)
{
	cout << "Nhap so duong thang ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong thang thu " << i+1 << endl;
		Nhap(a[i]);
	}
}