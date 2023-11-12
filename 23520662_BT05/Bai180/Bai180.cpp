#include <iostream>
#include <iomanip>
using namespace std;

struct Diem
{
	int x;
	int y;
};
typedef struct Diem DIEM;

struct TamGiac
{
	DIEM p1;
	DIEM p2;
	DIEM p3;
};
typedef struct TamGiac TAMGIAC;

void Nhap(DIEM&);
void Xuat(DIEM);
void Nhap(DIEM[], int&);
void Xuat(DIEM[], int);
bool isIndependent(DIEM, DIEM, DIEM, DIEM[], int);
TAMGIAC findIndependentTriangle(DIEM[], int);

bool isIndependent(DIEM p1, DIEM p2, DIEM p3, DIEM points[], int n) {
	for (int i = 0; i < n; ++i) {
		if ((points[i].x == p1.x && points[i].y == p1.y) ||
			(points[i].x == p2.x && points[i].y == p2.y) ||
			(points[i].x == p3.x && points[i].y == p3.y)) {
			return false;
		}
	}
	return true;
}

TAMGIAC findIndependentTriangle(DIEM points[], int n) {
	for (int i = 0; i < n - 2; ++i) {
		for (int j = i + 1; j < n - 1; ++j) {
			for (int k = j + 1; k < n; ++k) {
				DIEM p1 = points[i];
				DIEM p2 = points[j];
				DIEM p3 = points[k];

				if (isIndependent(p1, p2, p3, points, n)) {
					TAMGIAC result = { p1, p2, p3 };
					return result;
				}
			}
		}
	}
	return TAMGIAC{};
}

int main() {
	int n;
	DIEM points[100];
	Nhap(points, n);
	cout << "\nDiem vua nhap:";
	Xuat(points, n);
	cout << endl;

	TAMGIAC result = findIndependentTriangle(points, n);

	if (result.p1.x != 0 || result.p1.y != 0 ||
		result.p2.x != 0 || result.p2.y != 0 ||
		result.p3.x != 0 || result.p3.y != 0) {
		cout << "Tam giac doc lap: \n";
		cout << "(" << result.p1.x << ", " << result.p1.y << ")\n";
		cout << "(" << result.p2.x << ", " << result.p2.y << ")\n";
		cout << "(" << result.p3.x << ", " << result.p3.y << ")\n";
	}
	else {
		cout << "Khong tim thay tam giac doc lap.\n";
	}

	return 0;
}

void Nhap(DIEM& l)
{
	cout << "Nhap x: ";
	cin >> l.x;
	cout << "Nhap y: ";
	cin >> l.y;
}
void Nhap(DIEM a[], int& n)
{
	cout << "Nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: \n";
		Nhap(a[i]);
	}
}
void Xuat(DIEM a[], int n)
{
	for (int i = 0; i <= n - 1; i++)
		Xuat(a[i]);
}
void Xuat(DIEM l)
{
	cout << setw(6);
	cout << setprecision(3);
	cout << "\nx: " << l.x;
	cout << "\ny: " << l.y;
}