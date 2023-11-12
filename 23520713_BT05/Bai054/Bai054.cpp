#include<iostream>

using namespace std;

struct Diem
{
	float x;
	float y;
	float z;
};
typedef Diem DIEM;

void Nhap(DIEM&, DIEM&);
float KhoangCach(DIEM, DIEM);

int main()
{
	DIEM a, b;
	Nhap(a, b);
	cout << KhoangCach(a, b);
	return 0;
}

void Nhap(DIEM& a,DIEM& b)
{
	cout << "\nNhap toa do diem A : " << endl;
	cout << "Nhap hoanh do : ";
	cin >> a.x;
	cout << "Nhap tung do : ";
	cin >> a.y;
	cout << "Nhap cao do : ";
	cin >> a.z;
	cout << "\nNhap toa do diem B : " << endl;
	cout << "Nhap hoanh do : ";
	cin >> b.x;
	cout << "Nhap tung do : ";
	cin >> b.y;
	cout << "Nhap cao do : ";
	cin >> b.z;
}

float KhoangCach(DIEM a, DIEM b)
{
	cout << "\nKhoang cach cua hai diem A va B theo phuong Ox la ";
	return abs(a.x - b.x);
}