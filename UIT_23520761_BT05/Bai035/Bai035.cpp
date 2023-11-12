#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Định nghia hàm xuất tọa độ
	// Bai016 

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	cout << "\nToa do diem: ";
	Xuat(P);

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
	cout << "(" << P.x << " , " << P.y << ")";
	cout << "\nx: " << P.x << endl;
	cout << "y: " << P.y << endl;
}