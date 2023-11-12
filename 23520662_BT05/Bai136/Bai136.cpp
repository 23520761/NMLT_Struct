#include <iostream>
using namespace std;

struct diem
{
	float x;
	float y;
};
typedef struct diem DIEM;

struct tamgiac
{
	DIEM A;
	DIEM B;
	DIEM C;
};
typedef struct tamgiac TAMGIAC;

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);
void Nhap(DIEM&);
void Xuat(DIEM);

int main()
{
	TAMGIAC g;
	Nhap(g);
	cout << "\nTam giac vua nhap:";
	Xuat(g);
	return 1;
}

void Nhap(TAMGIAC& t)
{
	cout << "Nhap dinh A:\n";
	Nhap(t.A);
	cout << "Nhap dinh B:\n";
	Nhap(t.B);
	cout << "Nhap dinh C:\n";
	Nhap(t.C);
}

void Xuat(TAMGIAC t)
{
	cout << "\nToa do dinh A:";
	Xuat(t.A);
	cout << "\nToa do dinh B:";
	Xuat(t.B);
	cout << "\nToa do dinh C:";
	Xuat(t.C);
}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}

void Xuat(DIEM l)
{
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}
