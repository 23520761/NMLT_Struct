#include <iostream>
using namespace std;

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

struct DaThuc
{
	DONTHUC donthuc[500];
	int soluong;
};
typedef struct DaThuc DATHUC;

void Nhap(DATHUC& g, int n);
void Xuat(DATHUC g, int n);

int main()
{
	int n;
	cout << "Nhap so luong don thuc trong da thuc: ";
	cin >> n;
	DATHUC g;
	Nhap(g, n);
	cout << "\nDa thuc vua nhap: ";
	Xuat(g, n);
	return 1;
}

void Nhap(DATHUC& g, int n)
{
	g.soluong = n; // Set the number of elements in the array
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap don thuc so " << i + 1 << endl;
		cout << "Nhap he so: ";
		cin >> g.donthuc[i].a;
		cout << "Nhap so mu: ";
		cin >> g.donthuc[i].n;
		cout << endl;
	}
}

void Xuat(DATHUC g, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << g.donthuc[i].a << "x^" << g.donthuc[i].n;
		if (i < n - 1)
			cout << " + ";
	}
	cout << " = 0";
}
