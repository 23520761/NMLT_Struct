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
void Xuat(HINHCAU);

int KtThuoc(HINHCAU, DIEMKHONGGIAN);

void Nhap(DIEMKHONGGIAN& diem)
{
	cout << "Nhap toa do x: ";
	cin >> diem.x;
	cout << "Nhap toa do y: ";
	cin >> diem.y;
	cout << "Nhap toa do z: ";
	cin >> diem.z;
}

void Xuat(DIEMKHONGGIAN diem)
{
	cout << "\nToa do diem x:" << diem.x;
	cout << "\nToa do diem y:" << diem.y;
	cout << "\nToa do diem z:" << diem.z;
}

void Nhap(HINHCAU& c)
{
	cout << "Nhap tam:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}

void Xuat(HINHCAU c)
{
	cout << "\nTam:";
	Xuat(c.I);
	cout << "\nBan kinh:";
	cin >> c.R;
}

int KtThuoc(HINHCAU c, DIEMKHONGGIAN M)
{
	float kc = KhoangCach(c.I, M);
	if (kc <= c.R)
		return 1;
	return 0;
}

float KhoangCach(DIEMKHONGGIAN P, DIEMKHONGGIAN Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y) +(Q.z - P.z) * (Q.z - P.z));
}

int main()
{
	DIEMKHONGGIAN M;
	HINHCAU hc;
	cout << "Nhap hinh cau:" << endl;
	Nhap(hc);
	cout << "Nhap diem M: " << endl;
	Nhap(M);
	cout << "Hinh cau co:" << endl;
	Xuat(hc);
	cout << "Diem M:" << endl;
	Xuat(M);
	return 0;
}

