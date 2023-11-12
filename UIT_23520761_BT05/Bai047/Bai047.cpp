#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề điểm trong mặt phẩn Oxyz 
	// Bài 028: Kiểm tra điểm có thuộc phần tư thứ II hay không?

struct Diem
{
	float x;
	float y;
};
typedef struct Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);
int KtThuoc2(DIEM);

int main()
{
	DIEM P;
	Nhap(P);
	cout << "\nDiem P co toa do: ";
	Xuat(P);

	int kq = KtThuoc2(P);
	if (kq == 1)
		cout << "\nDiem P thuoc goc phan tu thu II." << endl;
	else
		cout << "\nDiem P khong thuoc goc phan tu thu II." << endl;
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

int KtThuoc2(DIEM P)
{
	if (P.x < 0 && P.y > 0)
		return 1;
	return 0;
}