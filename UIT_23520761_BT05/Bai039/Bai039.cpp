#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;
	
	// Chủ đề điểm trong mặt phẩn Oxyz 
	// Bai020: Tính khoảng cách đến gốc tọa độ
	// Công thức d = sqrt(x^2 + y^2) vì gốc tọa độ (0,0)

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
float KhoangCachGoc(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	cout << "\nDiem P co toa do: ";
	Xuat(P);

	float kc = KhoangCachGoc(P);
	cout << "\nKhoang cach tu diem P den goc toa do: " << setprecision(3) << kc << endl;
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
}

float KhoangCachGoc(DIEM P)
{
	return sqrt(pow(P.x, 2) + pow(P.y, 2));
}