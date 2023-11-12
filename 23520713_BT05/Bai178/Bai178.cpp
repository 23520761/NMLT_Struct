#include<iostream>

using namespace std;

struct DaThuc
{
    float a[500];
    int i;
};
typedef DaThuc DATHUC;

void Nhap(DATHUC&);
void Xuat(DATHUC);

int main()
{
    DATHUC a;
    Nhap(a);
    Xuat(a);
    return 0;
}

void Nhap(DATHUC& a)
{
    cout << "Nhap bac cua da thuc ";
    cin >> a.i;
    for (int i = a.i; i >= 0; i--)
    {
        cout << "Nhap he so cua a x bac " << i << " ";
        cin >> a.a[i];
    }
}

void Xuat(DATHUC a)
{
    DATHUC temp = a;
    int k;
    cout << "Nhap cap dao ham can tim ";
    cin >> k;
    if (k <= a.i)
    {
        for (int j = 0; j < k; j++)
        {
            if (temp.i == 0) {
                temp.a[0] = 0;
                break;
            }
            for (int i = temp.i; i > 0; i--)
            {
                temp.a[i - 1] = i * a.a[i];
            }
            temp.a[0] = 0; // The constant term becomes 0 in the derivative
            temp.i--;      // Decrease the degree of the derivative
        }

        cout << "Dao ham cap " << k << " cua da thuc la: ";
        for (int i = temp.i; i >= 0; i--)
        {
            cout << temp.a[i];
            if (i > 0)
                cout << "x^" << i;
            if (i > 1)
                cout << " + ";
        }
    }
    else
        cout << "Khong the tinh dao ham cap " << k << " vi bac cua da thuc la " << a.i;
}
