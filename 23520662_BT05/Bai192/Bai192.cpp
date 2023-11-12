#include <iostream>
#include <iomanip>
using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

int main()
{
	SOPHUC ln[500];
	int n;
	Nhap(ln, n);
	cout << "\nSo phuc vua nhap: \n";
	Xuat(ln, n);
	return 1;
}

void Nhap(SOPHUC& l)
{
	cout << "Nhap Thuc: ";
	cin >> l.Thuc;
	cout << "Nhap Ao: ";
	cin >> l.Ao;
}
void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
void Xuat(SOPHUC l)
{
	cout << l.Thuc << " + " << l.Ao << "i" << endl;
}
