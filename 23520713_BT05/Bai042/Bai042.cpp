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
	DIEM a;
	Nhap(a);
	Xuat(a);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap toa do cua diem A : " << endl;
	cout << "Nhap hoanh do : ";
	cin >> a.x;
	cout << "Nhap tung do : ";
	cin >> a.y;
}

void Xuat(DIEM a)
{
	a.x = -a.x;
	cout << "\nToa do diem doi xung cua A qua truc tung la (" << a.x << ";" << a.y << ")";
}