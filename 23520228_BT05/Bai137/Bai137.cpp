#include<iostream>
#include<iomanip>
#include<cmath>
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

void Nhap(DIEM&);
void Xuat(DIEM);

void Nhap(TAMGIAC&);
void Xuat(TAMGIAC);

int main()
{
	TAMGIAC tg;
	cout << "Tao tam giac:"<<endl;
	Nhap(tg);
	cout << "Ta co 1 tam giac:";
	Xuat(tg);	
	return 0;
}

void Nhap(DIEM& P)
{
	cout << "Nhap x:";
	cin >> P.x;
	cout << "Nhap y:";
	cin >> P.y;
}

void Xuat(DIEM P)
{
	cout << "x:";
	cout << P.x << " ";
	cout << "y:";
	cout << P.y;
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
	cout << "\nToa do dinh A:\n" << endl;
	Xuat(t.A);
	cout << "\nToa do dinh B:\n"<<endl;
	Xuat(t.B);
	cout << "\nToa do dinh C:\n"<<endl;
	Xuat(t.C);
}