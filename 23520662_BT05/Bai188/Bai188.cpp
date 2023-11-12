#include <iostream>
#include <iomanip>
using namespace std;

struct PhanSo
{
	int Tu;
	int Mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO&);
void Xuat(PHANSO);
void Nhap(PHANSO[], int&);
void Xuat(PHANSO[], int);
PHANSO DuongNhoNhat(PHANSO[], int);
bool ktDuong(PHANSO);

int main()
{
	PHANSO ln[500];
	int n;
	Nhap(ln, n);
	cout << "\nPhan so vua nhap: \n";
	Xuat(ln, n);
	cout << "\nSo duong nho nhat la:";
	Xuat(DuongNhoNhat(ln, n));
	return 1;
}

PHANSO DuongNhoNhat(PHANSO a[], int n)
{
	PHANSO lowest = { -1,1 };
	PHANSO firstDuong;
	int flag = 0;
	for (int i = 0; i < n; i++)
	{
		if (ktDuong(a[i]))
		{
			firstDuong = a[i];
			flag = 1;
			break;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (ktDuong(a[i]) && (firstDuong.Tu / firstDuong.Mau) > (a[i].Tu / a[i].Mau))
		{
			firstDuong = a[i];
		}
	}
	if (flag == 1)
		return firstDuong;
	else
		return lowest;
}

bool ktDuong(PHANSO a)
{
	if (a.Tu < 0 && a.Mau < 0)
		return true;
	else if (a.Tu < 0 || a.Mau < 0)
		return false;
	else
		return true;
}

void Nhap(PHANSO& l)
{
	cout << "Nhap Tu: ";
	cin >> l.Tu;
	cout << "Nhap Mau: ";
	cin >> l.Mau;
}
void Nhap(PHANSO a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap phan so thu " << i + 1 << ": \n";
		Nhap(a[i]);
	}
}
void Xuat(PHANSO a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
void Xuat(PHANSO l)
{
	cout << l.Tu << "/" << l.Mau << endl;
}
