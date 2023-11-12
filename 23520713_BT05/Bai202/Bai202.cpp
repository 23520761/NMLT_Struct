#include<iostream>

using namespace std;

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef SoPhuc SOPHUC;

void Nhap(SOPHUC&);

void Nhap(SOPHUC[], int&);
void Xuat(SOPHUC[], int);

int main()
{
	SOPHUC a[500];
	int n;
	Nhap(a, n);
	Xuat(a, n);
	return 0;
}

void Nhap(SOPHUC& a)
{
	cout << "Nhap phan thuc ";
	cin >> a.Thuc;
	cout << "Nhap phan ao ";
	cin >> a.Ao;
}

void Nhap(SOPHUC a[500], int& n)
{
	cout << "Nhap so so phuc";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap so phuc thu " << i << endl;
		Nhap(a[i]);
	}
}

void Xuat(SOPHUC a[500], int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (a[i].Ao > 0 && a[i].Thuc > 0)
		{
			cout << "\nSo phuc de yeu cau la " << endl;
			cout << "Phan thuc: " << a[i].Thuc<<endl;
			cout << "Phan ao: " << a[i].Ao;
			return;
		}
	}
	cout << 0;
}