#include<iostream>

using namespace std;

struct Ngay
{
    int Day;
    int Month;
    int Year;
};
typedef Ngay NGAY;

void Nhap(NGAY&);
int Nam(NGAY);
int Thang(NGAY);
int SoThuTu(NGAY);
void Xuat(NGAY);

int main()
{
    NGAY a;
    Nhap(a);
    Xuat(a);
    return 0;
}

void Nhap(NGAY& a)
{
    cout << "Nhap ngay ";
    cin >> a.Day;
    cout << "Nhap thang ";
    cin >> a.Month;
    cout << "Nhap nam ";
    cin >> a.Year;
}

int Nam(NGAY a)
{
    if ((a.Year % 4 == 0 && a.Year % 100 != 0) || (a.Year % 400 == 0))
        return 366;
    return 365;
}

int Thang(NGAY a)
{
    int thang[12] = { 31,28,31,30,31,30,31,31,30,31,31,30 };
    if ((a.Year % 4 == 0 && a.Year % 100 != 0) || (a.Year % 400 == 0))
        thang[1] = 29;
    return thang[a.Month - 1];
}

int SoThuTu(NGAY a)
{
    int dem = 0;
    while (a.Year > 1)
    {
        int lc = Nam(a);
        dem = dem + lc;
        a.Year--;
    }
    while (a.Month-1 > 0)
    {
        int lc = Thang(a);
        dem = dem + lc;
        a.Month--;
    }
    dem = dem + a.Day;
    return dem;
}

void Xuat(NGAY a)
{
    int kq = SoThuTu(a) ;
    kq = kq % 7;
    if (kq == 0)
    {
        cout << "Chu Nhat";
        return;
    }
    if (kq == 1)
    {
        cout << "Thu hai";
        return;
    }
    if (kq == 2)
    {
        cout << "Thu ba";
        return;
    }
    if (kq == 3)
    {
        cout << "Thu tu";
        return;
    }
    if (kq == 4)
    {
        cout << "Thu nam";
        return;
    }
    if (kq == 5)
    {
        cout << "Thu sau ";
        return;
    }
    if (kq == 6)
    {
        cout << "Thu bay";
        return;
    }
}
