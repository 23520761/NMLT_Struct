#include<iostream>
#include<iomanip>
#include<string>

using namespace std;
struct Tinh
{
	int MaSo;
	string TenTinh;
	int DanSo;
	float DienTich;
};
typedef Tinh TINH;

void Nhap(TINH&);
void Xuat(TINH);
void Nhap(TINH[], int&);
void Xuat(TINH[], int);
void HoanVi(TINH, TINH);

int main()
{
	TINH tinh[500];
	int n;
	Nhap(tinh, n);
	Xuat(tinh, n);
	return 0;
}

void Nhap(TINH& a)
{
	cout << "Nhap ma so cua tinh ";
	cin >> a.MaSo;
	cout << "Nhap ten cua tinh ";
	cin.ignore();
	getline(cin, a.TenTinh);
	cout << "Nhap dan so cua tinh ";
	cin >> a.DanSo;
	cout << "Nhap dien tich cua tinh ";
	cin >> a.DienTich;
}

void Xuat(TINH a)
{
	cout << "Thong tin cua tinh " << endl;
	cout << "Ma so : " << a.MaSo;
	cout << "Ten cua tinh : " << a.TenTinh;
	cout << "Dan so cua tinh : " << a.DanSo;
	cout << "Dien tich cua tinh : " << a.DienTich;
}

void Nhap(TINH x[500], int& n)
{
	cout << "nhap so luong tinh ";
	cin >> n;
	for (int i = 1; i < n; i++)
	{
		cout << "nhap thong tin tinh thu " << i << endl;
		Nhap(x[i]);
	}
}

void HoanVi(TINH a, TINH b)
{
	TINH tem = a;
	if (a.DienTich < b.DienTich)
	{
		a = b;
		b = tem;
	}
}

void Xuat(TINH x[500], int n)
{
	int dem = 0;
	cout << "Cac tinh co dan so tren 1000000" << endl;
	for (int i = 1; i < n; i++)
	{
		if (x[i].DanSo > 1000000)
		{
			Xuat(x[i]);
			dem++;
		}
	}
	if (dem == 0)
		cout << "khong co ";
	TINH lc = x[1];
	for (int i = 1; i < n; i++)
		if (lc.DienTich < x[i].DienTich)
			lc = x[i];
	cout << "Tinh co dien tich lon nhat la "<<endl;
	Xuat(lc);
	for (int i = 1; i <= n; i++)
	{
		HoanVi(x[i], x[i + 1]);
		cout << x->TenTinh;
	}
}