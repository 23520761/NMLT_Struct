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

int main()
{
	SOPHUC g, e;
	Nhap(g);
	Xuat(g);
	return 1;
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
