#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
struct ThoiGian
{
	int Gio;
	int Phut;
	int Giay;
};
typedef ThoiGian THOIGIAN;

struct Ngay
{
	int day;
	int month;
	int year;
};
typedef Ngay NGAY;

struct ChuyenBay
{
	string MaSo;
	NGAY NgayBay;
	THOIGIAN GioBay;
	string NoiDi;
	string NoiDen;
};
typedef ChuyenBay CHUYENBAY;

void Nhap(NGAY&);
void Xuat(NGAY);

void Nhap(THOIGIAN&);
void Xuat(THOIGIAN);

void Nhap(CHUYENBAY&);
void Xuat(CHUYENBAY);

void Nhap(CHUYENBAY[], int&);
void Xuat(CHUYENBAY[], int);

int SoSanh(NGAY, NGAY);
int TanSuat(CHUYENBAY[], int, NGAY);
NGAY NhieuNhat(CHUYENBAY[], int);

int Tim(CHUYENBAY[], int, string);

int main()
{
	CHUYENBAY cb[500];
	int n;
	Nhap(cb, n);
	Xuat(cb, n);
	cout << "Ngay co nhieu chuyen bay nhat la ";
	NhieuNhat(cb, n);
	cout << endl;
	cout << "moi nhap ma so ";
	string x;
	cin.ignore();
	getline(cin, x);
	if (Tim(cb, n, x) == -1)
		cout << "Khong hop le ";
	else
	{
		int i = Tim(cb, n, x);
		Xuat(cb, i);
	}
	return 0;
}

void Nhap(NGAY& a)
{
	cout << "Nhap ngay : ";
	cin >> a.day;
	cout << "Nhap thang : ";
	cin >> a.month;
	cout << "Nhap nam : ";
	cin >> a.year;
}

void Xuat(NGAY a)
{
	cout << "Ngay khoi hanh : " << a.day << "/" << a.month << "/" << a.year<<endl;
}

void Nhap(THOIGIAN& a)
{
	cout << "Nhap gio : ";
	cin >> a.Gio;
	cout << "Nhap phut : ";
	cin >> a.Phut;
	cout << "Nhap giay : ";
	cin >> a.Giay;
}

void Xuat(THOIGIAN a)
{
	cout << "Gio khoi hanh : " << a.Gio << "/" << a.Phut << "/" << a.Giay<<endl;
}

void Nhap(CHUYENBAY& a)
{
	cin.ignore();
	cout << "Nhap ma chuyen bay : ";
	getline(cin, a.MaSo);
	Nhap(a.NgayBay);
	Nhap(a.GioBay);
	cout << "Nhap noi den : ";
	getline(cin, a.NoiDen);
	cout << "Nhap noi di : ";
	getline(cin, a.NoiDi);
}

void Xuat(CHUYENBAY a)
{
	cout << "Ngay khoi hanh : ";
	Xuat(a.NgayBay);
	cout << "Thoi gian khoi hanh : ";
	Xuat(a.GioBay);
	cout << "Ma so chuyen bay " << a.MaSo;
	cout << "Noi den : " << a.NoiDen << endl;
	cout << "Noi di : " << a.NoiDi << endl;
}

void Nhap(CHUYENBAY a[500], int& n)
{
	cout << "Nhap so luong chuyen bay : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
		Nhap(a[i]);
}



void Xuat(CHUYENBAY a[500],int n)
{
	for (int i = 1; i <= n; i++)
		Xuat(a[i]);
}

int SoSanh(NGAY a, NGAY b)
{
	if (a.day != b.day)
		return 1;
	if (a.month != b.month)
		return 1;
	if (a.year != b.year)
		return 1;
	return 0;
}

int TanSuat(CHUYENBAY a[500], int n,NGAY x)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (SoSanh(a[i].NgayBay, a[i + 1].NgayBay) == 0)
			dem++;
	return dem;
}

NGAY NhieuNhat(CHUYENBAY a[500], int n)
{
	CHUYENBAY lc = a[1];
	for (int i = 1; i <= n; i++)
	{
		int x = TanSuat(a, i,a[i].NgayBay);
		int y = TanSuat(a, n, lc.NgayBay);
		if (x > y)
			lc = a[i];
	}
	return lc.NgayBay;
}

int Tim(CHUYENBAY a[500], int n, string x)
{
	for (int i = 1; i <= n; i++)
		if (a[i].MaSo == x)
			return i;
	return -1;
}