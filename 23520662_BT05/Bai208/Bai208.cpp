#include <iostream>
#include <iomanip>
using namespace std;

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
int ktSongSong(DUONGTHANG[], int);
int ktSongSong(DUONGTHANG, DUONGTHANG);

int main()
{
	DUONGTHANG ln[500];
	int n;
	Nhap(ln, n);
	cout << "\nDuong thang vua nhap:";
	Xuat(ln, n);
	if (ktSongSong(ln, n) == 1)
		cout << "\n\nCac duong thang song song";
	else
		cout << "\n\nCac duong thang khong song song";
	return 1;
}

int ktSongSong(DUONGTHANG a[], int n)
{
	int flag = 1;
	for (int i = 0; i <= n - 1; i++)
		if (!ktSongSong(a[i], a[0]))
			flag = 0;
	return flag;
}

int ktSongSong(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d2.c * d1.b;
	if (D == 0 && Dx != 0)
		return 1;
	return 0;
}


void Nhap(DUONGTHANG a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap duong thang thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void Xuat(DUONGTHANG a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
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
	cout << setw(6);
	cout << setprecision(3);
	cout << "\na: " << l.a;
	cout << "\nb: " << l.b;
	cout << "\nc: " << l.c;
}
