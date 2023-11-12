#include<iostream>

using namespace std;

struct Diem
{
	float x, y;
};
typedef Diem DIEM;

struct DuongTron
{
	DIEM O;
	float r;
};
typedef DuongTron DUONGTRON;

void Nhap(DIEM&);
void Nhap(DUONGTRON&);

void Nhap(DUONGTRON[], int&);
float KhoangCach(DIEM, DIEM);
int ViTri(DUONGTRON, DUONGTRON);
int Xuat(DUONGTRON[], int);

int main()
{
	DUONGTRON a[500];
	int n;
	Nhap(a, n);
	cout << Xuat(a, n);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do ";
	cin >> a.y;
}

void Nhap(DUONGTRON& a)
{
	cout << "\nNhap tam duong tron " << endl;
	Nhap(a.O);
	cout << "Nhap ban kinh ";
	cin >> a.r;
}

void Nhap(DUONGTRON a[500], int& n)
{
	cout << "Nhap n ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\nNhap duong tron thu " << i + 1 << endl;
		Nhap(a[i]);
	}
}

float KhoangCach(DIEM a, DIEM b)
{
	return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int ViTri(DUONGTRON a, DUONGTRON b)
{
	float lc = KhoangCach(a.O, b.O);
	if (lc == 0 && a.r == b.r)
		return 0;
	if (lc > a.r + b.r)
		return 1;
	if (lc == a.r + b.r)
		return 2;
	if (lc<a.r + b.r && lc>abs(a.r - b.r))
		return 3;
	if (lc == abs(a.r - b.r))
		return 4;
	return 5;
}

int Xuat(DUONGTRON a[500], int n)
{
	int flag = 1;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if (ViTri(a[i], a[j]) != 3)
			{
				flag = 0;
				return flag;
			}
	return flag;
}

