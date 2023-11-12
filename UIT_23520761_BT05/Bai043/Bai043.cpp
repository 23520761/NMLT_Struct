#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề điểm trong mặt phẩn Oxyz 
	// Bài 024: Tìm tọa độ điểm đối xứng qua đường phân giác thứ nhất y = x

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
DIEM DoiXungPhanGiac1(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	cout << "\nDiem P co toa do: ";
	Xuat(P);

	cout << "\nDiem doi xung qua duong phan giac thu nhat cua P: ";
	Xuat(DoiXungPhanGiac1(P));
	cout << endl;
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

DIEM DoiXungPhanGiac1(DIEM P)
{
	DIEM temp;
	temp.x = P.y;
	temp.y = P.x;
	return temp;
}
