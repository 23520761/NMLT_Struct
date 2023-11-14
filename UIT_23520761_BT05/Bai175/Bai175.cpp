#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đa thức 
	//Bai156: Khai báo biểu diễn kiểu đa thức

struct DaThuc
{
	int n;
	float a[100];
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
	DATHUC ff;
	Nhap(ff);
	cout << "\nDa thuc vua nhap: ";
	Xuat(ff);

	cout << "\n\nKet thuc !!!";
	return 1;
}

void Nhap(DATHUC& f)
{
	cout << "Nhap bac da thuc: ";
	cin >> f.n;
	for (int i = f.n; i >= 0; i--)
	{
		cout << "Nhap he so a[" << i << "]: ";
		cin >> f.a[i];
	}
}

void Xuat(DATHUC f)
{
	for (int i = f.n; i >= 1; i--)
	{
		cout << setw(3) << "(" << f.a[i] << ")";
		cout << "x^" << i << " + ";
	}
	cout << setw(3) << "(" << f.a[0] << ")";
}