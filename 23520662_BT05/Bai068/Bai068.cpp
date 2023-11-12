#include <iostream>
using namespace std;

struct SoPhuc
{
	int Thuc;
	int Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);

int main()
{
	SOPHUC g, e;
	Nhap(g);
	Nhap(e);
	Xuat(Tich(g, e));
	return 1;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + x.Ao * y.Thuc;
	return temp;
}

void Nhap(SOPHUC& f)
{
	cout << "Nhap phan thuc: ";
	cin >> f.Thuc;
	cout << "Nhap phan ao: ";
	cin >> f.Ao;
}

void Xuat(SOPHUC f)
{
	cout << "\nSo phuc la: " << f.Thuc << " + " << f.Ao << "i";
}
