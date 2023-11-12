#include<iostream>

using namespace std;

struct Diem
{
    float x, y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][100], int&, int&);
float KhoangCach(DIEM, DIEM);
void Xuat(DIEM a[][100], int m, int n);

int main()
{
    DIEM a[100][100];
    int m, n;
    Nhap(a, m, n);
    Xuat(a, m, n);
    return 0;
}

void Nhap(DIEM& a)
{
    cout << "Nhap hoanh do ";
    cin >> a.x;
    cout << "Nhap tung do";
    cin >> a.y;
}

void Nhap(DIEM a[][100], int& m, int& n)
{
    cout << "Nhap hang ";
    cin >> m;
    cout << "Nhap cot ";
    cin >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cout << "Nhap A[" << i << "][" << j << "]";
            Nhap(a[i][j]);
        }
}

float KhoangCach(DIEM a, DIEM b)
{
    return (float)(sqrt(pow((a.x - b.x), 2) + pow(a.y - b.y, 2)));
}


void Xuat(DIEM a[][100], int m, int n)
{
    cout << "Nhap diem P ";
    DIEM P;
    Nhap(P);
    DIEM lc = a[0][0];
    float kq = KhoangCach(lc, P);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (a[i][j].x != P.x || a[i][j].y != P.y)
                if (kq > KhoangCach(a[i][j], P))
                {
                    lc = a[i][j];
                    kq = KhoangCach(lc, P);
                }
        }
    cout << lc.x << "," << lc.y;
}


