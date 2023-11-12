#include<iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM diem;
	Nhap(diem);
	Xuat(diem);
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
	cout << "Toa do diem A la (" << a.x << ";" << a.y << ")";
}