#include<iostream>

using namespace std;

struct DuongThang
{
	float a, b, c;
};
typedef DuongThang DUONGTHANG;

void Nhap(DUONGTHANG&);
int KiemTra(DUONGTHANG, DUONGTHANG);
void Nhap(DUONGTHANG[], int&);
int Xuat(DUONGTHANG[], int);

int main()
{
	DUONGTHANG a[500];
	int n;
	Nhap(a, n);
	cout << Xuat(a, n);
	return 0;
}

void Nhap(DUONGTHANG& a)
{
	cout << "Nhap he so cua x ";
	cin >> a.a;
	cout << "Nhap he so cua y ";
	cin >> a.b;
	cout << "Nhap he so tu do ";
	cin >> a.c;
}

void Nhap(DUONGTHANG a[500], int& n)
{
	cout << "Nhap so duong thang ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong thang thu " << i + 1 << endl;
		Nhap(a[i]);
	}
}

int ViTri(DUONGTHANG a, DUONGTHANG b)
{
	int lc = 0;
	float k = float(a.a) / b.a;
	if (k == (float)a.b / b.b && k == (float)a.c / b.c)
	{
		lc = 1;
	}
	return lc;
}

int Xuat(DUONGTHANG a[500], int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (ViTri(a[i], a[j]) == 1)
			{
				return 1;
			}
	return 0;
}