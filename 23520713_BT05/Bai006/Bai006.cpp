#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef Ngay NGAY;

struct CauThu
{
	string MaSo;
	string Ten;
	NGAY NgaySinh;
};
typedef CauThu CAUTHU;

void Nhap(NGAY&);
void Xuat(NGAY);
void Nhap(CAUTHU&);
void Xuat(CAUTHU);

int main()
{
	CAUTHU ct;
	Nhap(ct);
	Xuat(ct);
	return 0;
}

void Nhap(NGAY& x)
{
	cout << "Nhap ngay : ";
	cin >> x.Ngay;
	cout << "Nhap thang : ";
	cin >> x.Thang;
	cout << "Nhap nam : ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "Ngay sinh cua cau thu: " << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

void Nhap(CAUTHU& x)
{
	cout << "Nhap ma so : ";
	cin >> x.MaSo;
	cout << "Nhap ten : ";
	getline(cin, x.Ten);
	cout << "Nhap Ngay Sinh" << endl;
	Nhap(x.NgaySinh);
}

void Xuat(CAUTHU x)
{
	cout << "Ten cau thu : " << x.Ten << endl;
	cout << "Ma so cau thu : " << x.MaSo<<endl;
	cout << "Ngay sinh : ";
	Xuat(x.NgaySinh);
}

