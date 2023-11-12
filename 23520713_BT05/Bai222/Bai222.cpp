#include<iostream>

using namespace std;

struct Ngay
{
	int day;
	int month;
	int year;
};
typedef Ngay NGAY;

void Nhap(NGAY&);
void Nhap(NGAY[], int&);

int main()
{
	NGAY a[500];
	int n;
	Nhap(a, n);
	return 0;
}

void Nhap(NGAY& a)
{
	cout << "Nhap ngay : ";
	cin >> a.day;
	cout << "Nhap thang : ";
	cin >> a.month;
	cout << "Nhap nam : ";
	cin >> a.year;
}

void Nhap(NGAY a[500], int& n)
{
	cout << "Nhap so ngay ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap ngay thu " << i + 1 << endl;
		Nhap(a[i]);
	}
}