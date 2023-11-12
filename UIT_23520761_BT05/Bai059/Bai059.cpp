#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

	// Chủ đề điểm trong không gian Oxyz	
	// Bai040: Tìm tọa độ điểm đối xứng qua mặt phẳng Oxy;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN P;
	cout << "Nhap toa do diem P: " << endl;
	Nhap(P);
	cout << "\nToa do diem P trong Oxyz: ";
	Xuat(P);
	cout << "Toa do diem P doi xung qua mat phan Oxy: ";
	Xuat(DoiXungOxy(P));
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
DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}
