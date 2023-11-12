#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	int x;
	int y;
};
typedef struct DIEM DIEM;

void ktThuoc2(DIEM);
void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM ln;
	Nhap(ln);
	cout << "\nDiem vua nhap:";
	Xuat(ln);
	ktThuoc2(ln);
	return 1;
}

void ktThuoc2(DIEM P)
{
	if (P.x < 0 && P.y > 0)
		cout << "\nThuoc goc phan tu thu 2!";
	else
		cout << "\nKhong thuoc goc phan tu thu 2!";

}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}

void Xuat(DIEM l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}
