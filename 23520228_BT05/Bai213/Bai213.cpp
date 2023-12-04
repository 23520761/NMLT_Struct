#include <iostream>
#include <iomanip>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct DuongThang
{
	float a;
	float b;
	float c;
};
typedef struct DuongThang DUONGTHANG;

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(DUONGTHANG&);
void Xuat(DUONGTHANG);

void Nhap(DUONGTHANG[], int&);
void Xuat(DUONGTHANG[], int);

DIEM GiaoDiem(DUONGTHANG, DUONGTHANG);
bool ktCat(DUONGTHANG, DUONGTHANG);
bool ktThuoc(DUONGTHANG, DIEM);
bool ktDongQui(DUONGTHANG[], int);


int main()
{
	DUONGTHANG dt[500];
	int n;
	cout << "\nNhap cac duong thang:" << endl;
	Nhap(dt, n);

	cout << "\nCac duong thang vua nhap:\n";
	Xuat(dt, n);

	return 0;
}

bool ktCat(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	if (D != 0)
		return true;
	return false;
}

DIEM GiaoDiem(DUONGTHANG d1, DUONGTHANG d2)
{
	float D = d1.a * d2.b - d2.a * d1.b;
	float Dx = -d1.c * d2.b + d1.b * d2.c;
	float Dy = -d1.a * d2.c + d2.a * d1.c;
	DIEM temp;
	temp.x = (Dx / D);
	temp.y = (Dy / D);
	return temp;
}

bool ktThuoc(DUONGTHANG d, DIEM P)
{
	if ((d.a * P.x + d.b * P.y + d.c) == 0)
		return true;
	return false;
}

bool ktDongQui(DUONGTHANG a[], int n)
{
	for (int i=0;i<=n-2;i++)
		for (int j=i+1;j<n-1;j++)
			if (ktCat(a[i], a[j]))
			{
				DIEM PP = GiaoDiem(a[i], a[j]);
				for (int k = 0; k < n; k++)
					if (k != i && k != j && ktThuoc(a[k], PP))
						return true;
			}
	return false;
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

void Nhap(DIEM& P)
{
	cout << "\nNhap hoanh do:";
	cin >> P.x;
	cout << "Nhap tung do:";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "(" << P.x << "," << P.y << ")";
}