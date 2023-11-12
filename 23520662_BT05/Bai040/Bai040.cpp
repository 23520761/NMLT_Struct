#include <iostream>
#include <iomanip>
using namespace std;

struct DiemKhongGian
{
	float x;
	float y;
	float z;
};
typedef struct DiemKhongGian DIEMKHONGGIAN;

DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN);
void Nhap(DIEMKHONGGIAN&);
void Xuat(DIEMKHONGGIAN);

int main()
{
	DIEMKHONGGIAN ln;
	DIEMKHONGGIAN ld;
	Nhap(ld);
	cout << "\nDiem khong gian vua nhap:";
	Xuat(ld);
	ln = DoiXungOxy(ld);
	cout << endl << endl;
	Xuat(ln);
	return 1;
}

DIEMKHONGGIAN DoiXungOxy(DIEMKHONGGIAN P)
{
	DIEMKHONGGIAN temp;
	temp.x = P.x;
	temp.y = P.y;
	temp.z = -P.z;
	return temp;
}


void Nhap(DIEMKHONGGIAN& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
	cout << "Nhap z: ";
	cin >> l.z;
}

void Xuat(DIEMKHONGGIAN l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
	cout << "\nz: " << l.z;
}
