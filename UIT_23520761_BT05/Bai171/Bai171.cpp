#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đường thẳng d: ax + by + c = 0 trong Oxy
	// Bai152: Kiểm tra xem hai đường thẳng có song song hay không.
	// xài giải hệ phương trình tuyến tính bằng hệ Cramer ( det(D) = 0 && det(Dx) != 0), chuyện về đổi dấu c thành -c
	// 2 đường thẳng song song khi D = 0 và Dx != 0 => hệ vô nghiệm => 2 đường thẳng song song

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int KtSongSong(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG d1, d2;

	cout << "Nhap duong thang 1: ";
	Nhap(d1);
	cout << "\nNhap duong thang 2: ";
	Nhap(d2);
	cout << "\nDuong thang 1 vua nhap: ";
	Xuat(d1);
	cout << "\nDuong thang 2 vua nhap: ";
	Xuat(d2);

	cout << endl;
	int kt = KtSongSong(d1, d2);
	if (kt == 1)
		cout << "\nDuong thang 1 song song duong thang 2.";
	else
		cout << "\nDuong thang 1 khong song song duong thang 2.";

	cout << "\n\n\nKet thuc!!!!!";
	return 1;
}

void Nhap(DUONGTHANG& x)
{
	cout << "\nNhap a: ";
	cin >> x.a;
	cout << "Nhap b: ";
	cin >> x.b;
	cout << "Nhap c: ";
	cin >> x.c;
}

void Xuat(DUONGTHANG x)
{
	cout << "\n a = " << x.a;
	cout << "\n b = " << x.b;
	cout << "\n c = " << x.c;
}

int KtSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}