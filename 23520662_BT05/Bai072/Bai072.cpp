#include <iostream>
using namespace std;

struct HonSo
{
	int Nguyen;
	int Mau;
	int Tu;
};
typedef struct HonSo HONSO;

void Nhap(HONSO&);
void Xuat(HONSO);

int main()
{
	HONSO g;
	Nhap(g);
	Xuat(g);
	return 1;
}

void Nhap(HONSO& f)
{
	cout << "Nhap phan Nguyen: ";
	cin >> f.Nguyen;
	cout << "Nhap phan Tu: ";
	cin >> f.Tu;
	cout << "Nhap phan Mau: ";
	cin >> f.Mau;
}

void Xuat(HONSO f)
{
	cout << "\nHon so la: " << f.Nguyen << "(" << f.Tu << "/" << f.Mau << ")";
}
