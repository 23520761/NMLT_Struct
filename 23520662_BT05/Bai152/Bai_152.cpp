#include <iostream>
using namespace std;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

int ktSongSong(DUONGTHANG, DUONGTHANG);
void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

int main()
{
	DUONGTHANG g, e;
	Nhap(g);
	Nhap(e);
	cout << "\nDuong thang co dang: \n";
	Xuat(g); cout << endl;
	Xuat(e);
	if (ktSongSong(g, e) == 1)
		cout << "\nSong song";
	else
		cout << "\nKhong song song";
	return 1;
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}


void Nhap(DUONGTHANG& l)
{
	cout << "Nhap a: ";
	cin >> l.a;
	cout << "Nhap b: ";
	cin >> l.b;
	cout << "Nhap c: ";
	cin >> l.c;
}

void Xuat(DUONGTHANG l)
{
	cout << l.a << "x" << " + " << l.b << "y" << " + " << l.c << " = 0";
}