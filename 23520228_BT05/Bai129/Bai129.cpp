#include<iostream>
#include<iomanip>
using namespace std;

struct diemkhonggian	
{
	float x;
	float y;
	float z;
};
typedef struct diemkhonggian DIEMKHONGGIAN;

struct hinhcau
{
	DIEMKHONGGIAN I;
	float R;
};
typedef struct hinhcau HINHCAU;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

void Nhap(HINHCAU&);

void Nhap(DIEMKHONGGIAN& diem)
{
	cout << "Nhap toa do x: ";
	cin >> diem.x;
	cout << "Nhap toa do y: ";
	cin >> diem.y;
	cout << "Nhap toa do z: ";
	cin >> diem.z;
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

int main()
{
	DIEMKHONGGIAN M;
	HINHCAU hc;
	cout << "Nhap hinh cau:" << endl;
	Nhap(hc);
	cout << "Nhap diem M: " << endl;
	Nhap(M);
	return 0;
}

