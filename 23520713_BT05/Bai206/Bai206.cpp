#include<iostream>

using namespace std;

struct Diem
{
	float x, y;
};
typedef Diem DIEM;

struct DuongTron
{
	DIEM O;
	float r;
};
typedef DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);

void Nhap(DUONGTRON[], int&);
float KhoangCach(DIEM);
void Xuat(DUONGTRON[], int);

int main()
{
	DUONGTRON a[500];
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

void Nhap(DUONGTRON& a)
{
	cout << "\nNhap tam duong tron " << endl;
	Nhap(a.O);
	cout << "Nhap ban kinh ";
	cin >> a.r;
}

void Nhap(DUONGTRON a[500], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong tron thu " << i+1 << endl;
		Nhap(a[i]);
	}
}

float KhoangCach(DIEM a)
{
	return sqrt(a.x * a.x + a.y * a.y);
}

void Xuat(DUONGTRON a[500], int n)
{
	DUONGTRON lc = a[0];
	for (int i = 0; i < n; i++)
		if (abs((KhoangCach(lc.O) - lc.r)) > abs(KhoangCach(a[i].O) - a[i].r))
			lc = a[i];
	cout << "Duong tron gan tam nhat la duong tron co tam (" << lc.O.x<<","<<lc.O.y<<")" << " ban kinh " << lc.r;
}