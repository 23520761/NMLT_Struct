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

DIEM TrongTam(TAMGIAC);

int main()
{
	TAMGIAC tg;
	cout << "Tao tam giac:" << endl;
	Nhap(tg);

	cout << "Ta co 1 tam giac:";
	Xuat(tg);

	cout << endl;

	DIEM G = TrongTam(tg);
	cout << "Trong tam cua tg:" << endl;
	Xuat(G);
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
	cout << "\nToa do dinh B:\n" << endl;
	Xuat(t.B);
	cout << "\nToa do dinh C:\n" << endl;
	Xuat(t.C);
}

DIEM TrongTam(TAMGIAC t)
{
	DIEM temp;
	temp.x= (t.A.x + t.B.x + t.C.x) / 3;
	temp.y= (t.A.y + t.B.y + t.C.y) / 3;
	return temp;
}
