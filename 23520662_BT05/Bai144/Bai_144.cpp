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
float TongKhoangCach(TAMGIAC, DIEM);
float KhoangCach(DIEM, DIEM);

int main()
{
	TAMGIAC g;
	DIEM e;
	Nhap(g);
	cout << "Nhap diem: \n";
	Nhap(e);
	cout << "\nTam giac vua nhap:";
	Xuat(g);
	cout << "\nDien tich tam giac la: ";
	cout << TongKhoangCach(g, e);
	return 1;
}

float TongKhoangCach(TAMGIAC t, DIEM P)
{
	float a = KhoangCach(t.A, P);
	float b = KhoangCach(t.B, P);
	float c = KhoangCach(t.C, P);
	return a + b + c;
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

float KhoangCach(DIEM P, DIEM Q)
{
	return sqrt((Q.x - P.x) * (Q.x - P.x) + (Q.y - P.y) * (Q.y - P.y));
}

void Xuat(DIEM l)
{
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}