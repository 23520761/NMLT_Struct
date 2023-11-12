#include<iostream>

using namespace std;

struct Diem
{
	float x, y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Xuat(DIEM);

float KhoangCach(float, float);

void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);

int main()
{
	DIEM a[500];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(DIEM& a)
{
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do ";
	cin >> a.y;
}

void Nhap(DIEM a[500], int& n)
{
	cout << "Nhap so diem ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nNhap diem thu " << i << endl;
		Nhap(a[i]);
	}
}

float KhoangCach(DIEM a, DIEM b)
{
	return pow(a.x - b.x, 2) + (a.y - b.y, 2);
}

void Xuat(DIEM a)
{
	cout << "Hoanh do " << a.x << endl;
	cout << "Tung do " << a.y << endl;
}

void Xuat(DIEM a[500], int n)
{
	DIEM A = a[0];
	DIEM B = a[1];
	for(int i=0;i<n-1;i++)
		for (int j = i + 1; j < n; j++)
		{
			float lc = KhoangCach(a[i], a[j]);
			if (lc < KhoangCach(A, B))
			{
				A = a[i];
				B = a[j];
			}
		}
	cout << "\nDiem thu nhat la " << endl;
	Xuat(A);
	cout << "\nDiem Thu Hai la " << endl;
	Xuat(B);
}