#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Mảng 1 chiều các đường thẳng
	// Bai208: Cho n đường thẳng. Hãy kiểm tra các đường thẳng này có cùng song song với nhay hay không.
	// xài giải hệ phương trình tuyến tính bằng hệ Cramer ( det(D) = 0 && det(Dx) != 0), chuyện về đổi dấu c thành -c
	// // 2 đường thẳng song song khi D = 0 và Dx != 0 => hệ vô nghiệm => 2 đường thẳng song song
struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

int KtSongSong(DUONGTHANG, DUONGTHANG);
int KtSongSong(DUONGTHANG[], int);

int main()
{
	int n;
	DUONGTHANG d[100];
	Nhap(d, n);
	cout << "\nCac duong thang vua nhap: ";
	Xuat(d, n);

	int kt = KtSongSong(d, n);
	cout << "\nKet luan:";
	if (kt == 1)
		cout << "\nCac duong thang song song nhau.";
	else if (kt == 2)
		cout << "\nChi co 1 duong thang.";
	else
		cout << "\nCac duong thang khong song song nhau.";

	cout << "\n\nKet thuc chuong trinh.";
	return 0;
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
	cout << endl;
}

void Nhap(DUONGTHANG d[], int& n)
{
	cout << "Nhap so luong duong thang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong thang thu " << i + 1 << ": ";
		Nhap(d[i]);
	}
}

void Xuat(DUONGTHANG d[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "\nDuong thang " << i + 1 << ": ";
		Xuat(d[i]);
	}
}

int KtSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1; // 2 đường thẳng song song
	return 0; // 2 đường thẳng không song song
}

int KtSongSong(DUONGTHANG d[], int n)
{
	if (n == 1)
		return 2;
	for (int i = 0; i < n; i++)
		if (!(KtSongSong(d[i], d[0])))
			return 0;
	return 1;
}