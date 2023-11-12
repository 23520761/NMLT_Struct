#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ngày
	// Bai092: Định nghĩa hàm nhập ngày.

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

int main()
{
	NGAY d;
	Nhap(d);
	cout << "\nNgay vua nhap:";
	Xuat(d);
	
	return 1;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay : ";
	cin >> x.Ngay;
	cout << "Nhap thang: ";
	cin >> x.Thang;
	cout << "Nhap nam  : ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay : " << x.Nam;
	cout << "\nThang: " << x.Thang;
	cout << "\nNam  : " << x.Nam;
}	