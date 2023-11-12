#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Đơn thức
	// Bai16: Tính giá trị đơn thức tại vị trí x = x0

struct DonThuc
{
	float a;
	int n;
};
typedef struct DonThuc DONTHUC;

void Nhap(DONTHUC&);
void Xuat(DONTHUC);
float TinhGiaTri(DONTHUC, float);

int main()
{
	DONTHUC f;
	float x0;
	Nhap(f);
	cout << "Nhap gia tri x0: ";
	cin >> x0;
	cout << "\nDon thuc f vua nhap: ";
	Xuat(f);
	cout << endl;
	float Gtri = TinhGiaTri(f, x0);
	cout << "\nGia tri cua don thuc tai vi tri (x0 = " << x0 << ") = " << Gtri;	

	return 1;
}

void Nhap(DONTHUC& f)
{
	cout << "Nhap he so: ";
	cin >> f.a;
	cout << "Nhap so mu: ";
	cin >> f.n;
}
void Xuat(DONTHUC f)
{
	cout << "\nHe so: " << f.a;
	cout << "\nSo mu: " << f.n;
}

float TinhGiaTri(DONTHUC f, float x0)
{
	float T = 1;
	float temp = f.a;
	for (int i = 1; i <= f.n; i++)
		temp = temp * x0;
	T = T * temp;
	return T;
}