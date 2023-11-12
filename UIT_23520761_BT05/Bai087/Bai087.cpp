#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề: Số phức - Complex Numbers
	// Bai068: Tích 2 số phức
	// số phức A: a + bi
	// Số phức B: c + di
	// Tích 2 số phức: (ac - bd) + (ad + bc)i.
struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);

int main()
{
	SOPHUC A, B;
	cout << "Nhap so phuc A: ";
	Nhap(A);
	cout << "Nhap so phuc B: ";
	Nhap(B);
	cout << "\nSo phuc A: ";
	Xuat(A);
	cout << "\nSo phuc B: ";
	Xuat(B);
	cout << "\nTich 2 so phuc A va B: ";
	Xuat(Tich(A, B));

	return 1;
}

void Nhap(SOPHUC& x)
{
	cout << "\nNhap thuc: ";
	cin >> x.Thuc;
	cout << "Nhap ao: ";
	cin >> x.Ao;
}

void Xuat(SOPHUC x)
{
	cout << setw(6) << setprecision(3);
	cout << "\nThuc = " << x.Thuc;
	cout << "\nAo   = " << x.Ao;
}

SOPHUC Tich(SOPHUC x, SOPHUC y)
{
	SOPHUC temp;
	temp.Thuc = x.Thuc * y.Thuc - x.Ao * y.Ao;
	temp.Ao = x.Thuc * y.Ao + y.Thuc * x.Ao;
	return temp;
}