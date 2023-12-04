#include<iostream>
using namespace std;

struct sophuc
{
	float thuc;
	float ao;
};
typedef struct sophuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

SOPHUC Tong(SOPHUC[], int);

int main()
{

	return 0;
}

void Nhap(SOPHUC& Z)
{
	cout << "So thuc: ";
	cin >> Z.thuc;
	cout << "So ao: ";
	cin >> Z.ao;
}

void Xuat(SOPHUC Z)
{
	cout << Z.thuc << " + " << Z.ao << "i";
}

void Nhap(SOPHUC a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so phuc thu" << i + 1 << ": \n";
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[], int n)
{
	for (int i = 0; i < n; i++)
		Xuat(a[i]);
}

SOPHUC Tong(SOPHUC a, SOPHUC b)
{
	SOPHUC temp;
	temp.thuc = a.thuc + b.thuc;
	temp.ao = a.ao + b.ao;
	return temp;
}
SOPHUC Tong(SOPHUC a[], int n)
{
	SOPHUC s = { 0,0 };
	for (int i = 0; i < n; i++)
		s = Tong(s, a[i]);
	return s;
}