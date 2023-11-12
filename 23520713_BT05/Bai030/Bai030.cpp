#include<iostream>
#include<iomanip>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

struct TamGiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void ThongTin(DIEM[]);

int main()
{
	DIEM diem[500];
	ThongTin(diem);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap hoanh do : ";
	cin >> a.x;
	cout << "Nhap tung do : ";
	cin >> a.y;
}

void Xuat(DIEM a)
{
	cout << "(" << a.x << ";" << a.y << ")";
}

void ThongTin(DIEM a[3])
{
	for (int i = 1; i <= 3; i++)
	{
		cout << "\nNhap thong tin diem thu " << i<<endl;
		Nhap(a[i]);
	}
	for (int i = 1; i <= 3; i++)
	{
		cout << "\nThong tin diem thu " << i<<" : ";
		Xuat(a[i]);
	}
}