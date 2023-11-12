#include<iostream>
#include<iomanip>

using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
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
	cout << "Nhap hoanh do : ";
	cin >> a.x;
	cout << "Nhap tung do : ";
	cin >> a.y;
	cout << "Nhap cao do : ";
	cin >> a.z;
}

void Xuat(DIEM a)
{
	cout << "Toa do cua diem A la (" << a.x << "," << a.y << "," << a.z<<")";
}