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
void Tim(NGAY);

int main()
{
    NGAY a;
    Nhap(a);
    Tim(a);
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
    while (a.Month > 1)
    {
        int lc = Thang(a);
        dem = dem + lc;
        a.Month--;
    }
    dem = dem + a.Day;
    return dem;
}

void Tim(NGAY a)
{
    int lc = SoThuTu(a) + 1;
    NGAY i = { 1,1,1 };
    int nam = Nam(i);
    while (lc - nam > 0)
    {
        lc = lc - nam;
        i.Year++;
        nam = Nam(i);
    }
    NGAY b = { 1, 1, i.Year };
    int thang = Thang(b);
    while (lc - thang > 0)
    {
        thang = Thang(b);
        lc = lc - thang;
        b.Month++;
    }
    b.Day = lc;

    cout << b.Day << "/" << b.Month << "/" << i.Year;
}
