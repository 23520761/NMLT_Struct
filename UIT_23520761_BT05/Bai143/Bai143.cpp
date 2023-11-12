#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đường tròn trong mặt phẳng Oxyz
	// Bai124: Kiểm tra 1 tọa độ điểm có nằm trong đường tròn hay không
struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

struct DuongTron
{
	DIEM I;
	float R;
};
typedef struct DuongTron DUONGTRON;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTRON&);
void Xuat(DUONGTRON);
int KhoangCach(DIEM, DIEM);
int KtThuoc(DUONGTRON, DIEM);

int main()
{
	DUONGTRON cc;
	Nhap(cc);
	DIEM P;
	cout << "\nNhap diem P:" << endl;
	Nhap(P);
	cout << "\nDuong tron vua nhap: ";
	Xuat(cc);
	cout << "\nDiem P:";
	Xuat(P);
	cout << endl;
	int kt = KtThuoc(cc, P);
	if (kt == 1)
		cout << "\nDiem P thuoc duong tron.";
	else
		cout << "\nDiem P khong thuoc duong tron.";

	return 1;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
}
void Xuat(DIEM P)
{
	cout << "\nx = " << P.x;
	cout << "\ny = " << P.y;
}

void Nhap(DUONGTRON& c)
{
	cout << "Nhap tam I:\n";
	Nhap(c.I);
	cout << "Nhap ban kinh: ";
	cin >> c.R;
}
void Xuat(DUONGTRON c)
{
	cout << "\nTam I: ";
	Xuat(c.I);
	cout << "\nBan kinh: " << c.R;
}

int KhoangCach(DIEM P, DIEM Q)
{
	return sqrt(pow(P.x - Q.x, 2) + pow(P.y - Q.y, 2));
}

int KtThuoc(DUONGTRON c, DIEM P)
{
	float kc = KhoangCach(c.I, P);
	if (kc <= c.R)
		return 1;
	return 0;
}