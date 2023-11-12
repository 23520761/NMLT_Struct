#include<iostream>

using namespace std;

struct Diem
{
	float x, y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][500], int&,int&);

int main()
{
	DIEM a[500][500];
	int m, n;
	Nhap(a, m, n);
	return 0;
}

void Nhap(DIEM&a)
{
	cout << "Nhap hoanh do ";
	cin >> a.x;
	cout << "Nhap tung do";
	cin >> a.y;
}

void Nhap(DIEM a[][500], int& m, int& n)
{
	cout << "Nhap hang ";
	cin >> m;
	cout << "Nhap cot ";
	cin >> n;
	for(int i=0;i<m;i++)
		for (int j = 0; j < n; j++)
		{
			cout << "Nhap A[" << i << "][" << j << "]";
			Nhap(a[i][j]);
		}
}