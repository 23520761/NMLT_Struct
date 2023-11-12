#include<iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef Diem DIEM;

void Nhap(DIEM& a);
void Xuat(DIEM a);

int main()
{
	DIEM a;
	Nhap(a);
	Xuat(a);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "\nNhap toa do diem A : " << endl;
	cout << "Nhap hoanh do : ";
	cin >> a.x;
	cout << "Nhap tung do : ";
	cin >> a.y;
	cout << "Nhap cao do : ";
	cin >> a.z;
}

void Xuat(DIEM a)
{
	a.x = -a.x;
	a.y = -a.y;
	a.z = -a.z;
	cout << "Diem doi xung voi A qua goc toa do la (" << a.x << "," << a.y << "," << a.z<<")";
}