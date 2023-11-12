#include<iostream>

using namespace std;

struct Diem
{
    float x, y;
};
typedef Diem DIEM;

void Nhap(DIEM&);
void Nhap(DIEM&, DIEM&, DIEM&);
float KhoangCach(float, float);
int KiemTra(DIEM, DIEM, DIEM);

int main()
{
    DIEM a, b, c;
    Nhap(a, b, c);
    cout << KiemTra(a, b, c);
    return 0;
}

void Nhap(DIEM& a)
{
    cout << "Nhap hoanh do ";
    cin >> a.x;
    cout << "Nhap tung do ";
    cin >> a.y;
}

void Nhap(DIEM& a, DIEM& b, DIEM& c)
{
    cout << "Nhap diem thu nhat " << endl;
    Nhap(a);
    cout << "\nNhap diem thu hai " << endl;
    Nhap(b);
    cout << "\nNhap diem thu ba " << endl;
    Nhap(c);
}

float KhoangCach(float a, float b)
{
    return sqrt(a * a + b * b );
}

int KiemTra(DIEM a, DIEM b, DIEM c)
{
    float da = KhoangCach(b.x - c.x, b.y - c.y);
    float db = KhoangCach(a.x - c.x, a.y - b.y);
    float dc = KhoangCach(a.x - b.x, a.y - b.y);
    if (da + db > dc && da + dc > db && db + dc > da)
        return 1;
    return 0;
}