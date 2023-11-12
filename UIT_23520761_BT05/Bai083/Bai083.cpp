#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
	// Chủ đề: Số phức - Complex Numbers
	// Bai064: Định nghĩa hàm nhập số phức

struct SoPhuc
{
	float Thuc;
	float Ao;
};
typedef struct SoPhuc SOPHUC;

void Nhap(SOPHUC&);
void Xuat(SOPHUC);

int main()
{
	SOPHUC A;
	cout << "Nhap so phuc A: ";
	Nhap(A);
	cout << "\nSo phuc A: ";
	Xuat(A);

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