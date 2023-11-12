#include <iostream>
#include <iomanip>
using namespace std;

struct DIEM
{
	int x;
	int y;
};
typedef struct DIEM DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM ln;
	Nhap(ln);
	cout << "\nDiem vua nhap:";
	Xuat(ln);
	return 1;
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
