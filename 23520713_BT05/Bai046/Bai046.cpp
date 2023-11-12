#include<iostream>
#include<string>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
string KiemTra(DIEM);

int main()
{
	DIEM diem;
	Nhap(diem);
	cout << KiemTra(diem);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap toa do diem A : " << endl;
	cout << "Nhap hoanh do : ";
	cin >> a.x;
	cout << "Nhap tung do : ";
	cin >> a.y;
}

string KiemTra(DIEM a)
{
	if (a.x > 0 && a.y > 0)
		return "Diem A thuoc goc phan tu thu nhat";
	return "Diem A khong thuoc phan tu thu nhat ";
}