#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
struct MatHang
{
	string TenHang;
	int DonGia;
	int LuongTon;
};
typedef struct MatHang MATHANG;
void Nhap(MATHANG&);
void Xuat(MATHANG);

int main()
{
	MATHANG x;
	Nhap(x);
	Xuat(x);
	return 0;
}

void Nhap(MATHANG& x)
{
	cout << "Nhap ten mat hang :";
	getline(cin, x.TenHang);
	cout << "Nhap don gia :";
	cin >> x.DonGia;
	cout << "Nhap luong ton : ";
	cin >> x.LuongTon;
}

void Xuat(MATHANG x)
{
	cout << "Thong tin mat hang : " << endl;
	cout << "Ten mat hang : " << x.TenHang << endl;
	cout << "Don gia : " <<x.DonGia << endl;
	cout << "Luong ton : " << x.LuongTon << endl;
}