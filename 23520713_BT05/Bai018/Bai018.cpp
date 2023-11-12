#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

struct HocSinh
{
	string HoTen;
	int Toan;
	int Van;
	float TrungBinh;
};
typedef HocSinh HOCSINH;

void Nhap(HOCSINH&);
void Xuat(HOCSINH);

void Nhap(HOCSINH[],int&);
void Xuat(HOCSINH[], int);

int Gioi(HOCSINH[], int);

int main()
{
	HOCSINH hs[500];
	int n;
	Nhap(hs, n);
	Xuat(hs, n);
	cout<<"So luong hoc sinh gioi la "<<Gioi(hs, n);
	return 0;
}

void Nhap(HOCSINH& a)
{
	cin.ignore();
	cout << "Nhap ho ten hoc sinh : ";
	getline(cin, a.HoTen);
	cout << "Nhap diem toan : ";
	cin >> a.Toan;
	cout << "Nhap diem van : ";
	cin >> a.Van;
	a.TrungBinh = (float)(a.Toan + a.Van) / 2;
}

void Xuat(HOCSINH a)
{
	cout << "Thong tin hoc sinh : " << endl;
	cout << "Ho ten : " << a.HoTen<<endl;
	cout << "Diem toan : " << a.Toan << endl;
	cout << "Diem van : " << a.Van << endl;
	cout << "Diem trung binh : " << a.TrungBinh<<endl;
}

void Nhap(HOCSINH a[500], int& n)
{
	cout << "Nhap so luong hoc sinh : ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "\nNhap thong tin cua hoc sinh thu " << i << endl;
			Nhap(a[i]);
	}
}

void Xuat(HOCSINH a[500], int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << "\nThong tin cua hoc sinh thu " << i << endl;
		Xuat(a[i]);
	}
}

int Gioi(HOCSINH a[500], int n)
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
		if (a[i].Toan > 8 && a[i].Van > 8)
			dem++;
	return dem;
}