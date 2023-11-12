#include<iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
};
typedef Diem DIEM;

void Nhap(DIEM&,DIEM&);
void KhoangCach(DIEM, DIEM);

int main()
{
	DIEM a, b;
	Nhap(a, b);
	KhoangCach(a, b);
	return 0;
}

void Nhap(DIEM& a, DIEM& b)
{
	cout << "Nhap toa do diem A "<<endl;
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do ";
	cin >> a.y;
	cout << "\nNhap toa do diem B " << endl;
	cout << "Nhap hoanh do ";
	cin >> b.x;
	cout << "Nhap tung do ";
	cin >> b.y;
}

void KhoangCach(DIEM a, DIEM b)
{
	cout << "\nKhoang cach cua hai diem tren truc Oy la " << abs(a.y - b.y);
}