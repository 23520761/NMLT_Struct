#include<iostream>

using namespace std;

struct Diem
{
    float x, y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM[][500], int&, int&);
int ktTrung(DIEM, DIEM);
int DemKhongTrung(DIEM a[][500], int m, int n);

int main()
{
    DIEM a[500][500];
    int m, n;
    Nhap(a, m, n);
    cout << DemKhongTrung(a, m, n);
    return 0;
}

void Nhap(DIEM& a)
{
    cout << "Nhap hoanh do ";
    cin >> a.x;
    cout << "Nhap tung do";
    cin >> a.y;
}

void Nhap(DIEM a[][500], int& m, int& n)
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

int ktTrung(DIEM P, DIEM Q)
{
    if (P.x == Q.x && P.y == Q.y)
        return 1;
    return 0;
}

int DemKhongTrung(DIEM a[][500], int m, int n)
{
    int dem = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            int trung = 0;
            for (int k = 0; k < m; k++)
                for (int l = 0; l < n; l++)
                    if (k != i || l != j)
                        if (ktTrung(a[i][j], a[k][l]))
                            trung = 1;
            if (!trung)
                dem++;
        }
    return dem;
}
