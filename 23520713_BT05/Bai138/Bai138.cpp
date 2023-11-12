#define _USE_MATH_DEFINES
#include<iostream>

using namespace std;

struct DuongTron
{
	float x;
	float y;
	float r;
};
typedef DuongTron DUONGTRON;

void Nhap(DUONGTRON&);
float ChuVi(DUONGTRON);

int main()
{
	DUONGTRON a;
	Nhap(a);
	cout << ChuVi(a);
	return 0;
}

void Nhap(DUONGTRON& a)
{
	cout << "Nhap tam cua duong tron "<<endl;
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do ";
	cin >> a.y;
	cout << "Nhap ban kinh ";
	cin >> a.r;
}

float ChuVi(DUONGTRON a)
{
	cout << "Chu vi cua duong tron la ";
	return 2 * (M_PI)*a.r;
}