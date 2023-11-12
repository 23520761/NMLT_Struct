#include<iostream>

using namespace std;

struct Diem
{
	float x, y;
};
typedef Diem DIEM;
void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int main()
{
	DIEM a[500];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do ";
	cin >> a.y;
}

void Xuat(DIEM a)
{
	cout << "Hoanh do " << a.x << endl;
	cout << "Tung do " << a.y << endl;
}

void Nhap(DIEM a[500], int& n)
{
	cout << "Nhap so diem ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nNhap diem thu " << i << endl;
		Nhap(a[i]);
	}
}

void Xuat(DIEM a[500], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "\n Diem thu " << i << endl;
		Xuat(a[i]);
	}
}