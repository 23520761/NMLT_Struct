#include<iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef SoPhuc SOPHUC;

void Nhap(SOPHUC&, SOPHUC&);
void Xuat(SOPHUC, SOPHUC);

int main()
{
	SOPHUC a, b;
	Nhap(a, b);
	Xuat(a, b);
	return 0;
}

void Nhap(SOPHUC& a, SOPHUC& b)
{
	cout << "Nhap so thuc thu nhat " << endl;
	cout << "Nhap phan thuc : ";
	cin >> a.Thuc;
	cout << "Nhap phan ao : ";
	cin >> a.Ao;
	cout << "\nNhap so thuc thu hai " << endl;
	cout << "Nhap phan thuc : ";
	cin >> b.Thuc;
	cout << "Nhap phan ao : ";
	cin >> b.Ao;
}

void Xuat(SOPHUC a, SOPHUC b)
{
	float thuc = a.Thuc - b.Thuc;
	float ao = a.Ao - b.Ao;
	cout << "\nHieu hai so thuc la " << thuc << " + " << ao << "i";
}