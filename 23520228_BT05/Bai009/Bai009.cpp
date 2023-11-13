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
typedef struct Ngay NGAY;

struct Daily
{
	string MaSo;
	string TenDaily;
	int DienThoai;
	NGAY NgayNhan;
	string DiaChi;
	string EMail;
};
typedef struct Daily DAILY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(DAILY&);
void Xuat(DAILY);

int main()
{
	DAILY dl;
	Nhap(dl);
	Xuat(dl);
	return 0;
}
void Nhap(NGAY& x)
{
	cout << "\nNhap ngay:";
	cin >> x.Ngay;
	cout << "Nhap thang:";
	cin >> x.Thang;
	cout << "Nhap nam: ";
	cin >> x.Nam;
}

void Xuat(NGAY x)
{
	cout << "\nNgay: " << x.Ngay << endl;
	cout << "Thang: " << x.Thang << endl;
	cout << "Nam: " << x.Nam << endl;
}

void Nhap(DAILY& x)
{
	cout << "\nNhap ma so: ";
	getline(cin, x.MaSo);
	cout << "Nhap ten dai ly: ";
	getline(cin, x.TenDaily);
	cout << "Nhap sdt: ";
	cin >> x.DienThoai;
	cout << "Nhap ngay tiep nhan: ";
	Nhap(x.NgayNhan);
	cout << "Nhap dia chi: ";
	cin.ignore();
	getline(cin, x.DiaChi);
	cout << "Nhap email: ";
	getline(cin, x.EMail);
}

void Xuat(DAILY x)
{
	cout << "\nMa so dai ly: " << x.MaSo;
	cout << "\nTen dai ly: " << x.TenDaily;
	cout << "\nDien thoai: " << x.DienThoai;
	cout << "\nNgay tiep nhan: ";
	Xuat(x.NgayNhan);
	cout << "Dia chi: " << x.DiaChi;
	cout << "\nE-mail: " << x.EMail;
}