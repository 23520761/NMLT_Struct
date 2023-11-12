#include <iostream>
#include <cmath>
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

DATHUC operator%(DATHUC a, DATHUC b);
float TinhGiaTri(DATHUC f, float x);

int main()
{
	DATHUC f;
	int n;
	float a, b, epsilon;
	cout << "Nhap so luong don thuc trong da thuc: ";
	cin >> n;
	f.soluong = n;
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap he so don thuc thu " << i + 1 << ": ";
		cin >> f.donthuc[i].a;
		cout << "Nhap so mu don thuc thu " << i + 1 << ": ";
		cin >> f.donthuc[i].n;
	}
	cout << "Nhap khoang [a, b]: ";
	cin >> a >> b;
	cout << "Nhap sai so epsilon: ";
	cin >> epsilon;
	float nghiem = 0;
	while (abs(b - a) > epsilon)
	{
		float mid = (a + b) / 2;
		float f_mid = TinhGiaTri(f, mid);
		if (f_mid == 0.0)
		{
			nghiem = mid;
			break;
		}
		else if (f_mid * TinhGiaTri(f, a) < 0)
			b = mid;
		else
			a = mid;
	}
	cout << "Nghiem cua da thuc trong doan [" << a << ", " << b << "] la: " << nghiem << endl;
	return 0;
}

DATHUC operator%(DATHUC a, DATHUC b)
{
	DATHUC Du = a;
	int i, j;

	while (Du.soluong >= b.soluong)
	{
		float heSo = Du.donthuc[0].a / b.donthuc[0].a;
		for (i = 0; i < b.soluong; i++)
			Du.donthuc[i].a -= heSo * b.donthuc[i].a;

		i = 0;
		while (i < Du.soluong && Du.donthuc[i].a == 0)
		{
			for (j = i; j < Du.soluong - 1; j++)
				Du.donthuc[j] = Du.donthuc[j + 1];
			Du.soluong--;
		}
	}

	return Du;
}

float TinhGiaTri(DATHUC f, float x)
{
	float giaTri = 0.0;
	for (int i = 0; i < f.soluong; i++)
	{
		giaTri += f.donthuc[i].a * std::pow(x, f.donthuc[i].n);
	}
	return giaTri;
}
