#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề điểm trong không gian Oxyz
	// Bai032: Định nghĩa hàm nhập tọa độ điểm trong Oxyz

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	Nhap(P);
	cout << "\nToa do diem P trong Oxyz: ";
	Xuat(P);
	return 1;
}

void Nhap(DIEMKHONGGIAN& P)
{
	cout << "Nhap x: ";
	cin >> P.x;
	cout << "Nhap y: ";
	cin >> P.y;
	cout << "Nhap z: ";
	cin >> P.z;
}

void Xuat(DIEMKHONGGIAN P)
{
	cout << "(" << P.x << ", " << P.y << ", " << P.z << ")" << endl;
}