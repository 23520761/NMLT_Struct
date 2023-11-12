#include<iostream>

using namespace std;

struct DiemKhongGian
{
    float x, y, z;
};
typedef DiemKhongGian DIEMKHONGGIAN;

struct MatCau
{
    DIEMKHONGGIAN O;
    float R;
};
typedef MatCau MATCAU;

void Nhap(DIEMKHONGGIAN&);
void Nhap(MATCAU&);
void Xuat(MATCAU);

int main()
{
    MATCAU a;
    Nhap(a);
    Xuat(a);
    return 0;
}

void Nhap(DIEMKHONGGIAN& a)
{
    cout << "Nhap hoanh do ";
    cin >> a.x;
    cout << "Nhap tung do ";
    cin >> a.y;
    cout << "Nhap cao do ";
    cin >> a.z;
}

void Nhap(MATCAU& a)
{
    cout << "Nhap tam mat cau " << endl;
    Nhap(a.O);
    cout << "\nNhap ban kinh ";
    cin >> a.R;
}

void Xuat(MATCAU a)
{
    cout << "\nToa do tam mat cau la " << "( " << a.O.x << "," << a.O.y << "," << a.O.z << " )";
    cout << "\nBan kinh la " << a.R;
}
