#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

struct ngay
{
	int ng;
	int th;
	int nm;
};
typedef struct ngay NGAY;

void Nhap(NGAY&);
void Xuat(NGAY);

int main()
{
	NGAY A;
	cout << "Nhap date:"<<endl;
	Nhap(A);
	cout << "Date:" << endl;
	Xuat(A);
	return 0;
}

void Nhap(NGAY& x)
{	
	cout << "Nhap ngay: ";
	cin >> x.ng;
	cout << "Nhap thang: ";
	cin >> x.th;
	cout << "Nhap nam: ";
	cin >> x.nm;
}

void Xuat(NGAY x)
{
	cout << "\nNgay:" << x.ng;
	cout << "\nThang:" << x.th;
	cout << "\nNam: " << x.nm;
}