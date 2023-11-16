#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
	// Chủ đề: Ngày
	// Bai104: Tìm Ngày khi biết số thứ tự ngày
	/*
		ý tưởng: 
		- B1: lấy số thứ tự trừ cho số ngày tối đa qua từng năm nếu đáp án ra < 0 thì bắt đầu B2:
		- B2: số thứ tự còn lại thì dùng hàm tìm ngày trong năm bằng cách lấy số thứ tự còn lại trừ cho số ngày tối đa của từng tháng tới khi số thứ tự < 0 thì dừng lại
		- B3: tại thời điểm đó thì tìm được tại tháng x và ngày dư chính là ngày trong tháng đó
		
		- Các hàm cần có
		1/ Kt nhuận:
			+ nếu là nhuận thì trả về 1 ngược lại trả về 0
		2/ Tính số ngày tối đa của từng tháng: 
			+ cho mảng 1 chiều 12 phần tử lưu tối đa của từng tháng
			+ nếu là năm nhuận thì tháng 2 có 29 ngày ngược lại thì 28 ngày
			+ giá trị trả về cho [tháng - 1] vì mảng ban đầu bắt đầu từ 0
		3/  Tính số ngày tối đa của năm:
			+ Nếu là nhuận thì có 366 ngày ngược lại thì 365 ngày
		4/ Tìm ngày trong năm khi biết stt của năm và năm đó
			+ B1: lấy số thứ tự của năm trừ cho số ngày tối đa qua của từng tháng
			+ B2: nếu stt < 0 thì dừng lại và trả về tháng tại đó và ngày dư
			+ B3: Ngày dư chính là ngày cần tìm
		5/ Tìm ngày khi biết số stt, giá trị trả về cho hàm số 4
			 + B1: Duyệt tới năm n - 1
			 + B2: 
	*/

struct Ngay
{
	int Ngay;
	int Thang;
	int Nam;
};
typedef struct Ngay NGAY;

void Xuat(NGAY);

int KtNhuan(NGAY);
int SoNgayToiDaCuaThang(NGAY);
int SoNgayToiDaCuaNam(NGAY);
NGAY TimNgay(int, int);
NGAY TimNgay(int);

int main()
{
	int stt;
	cout << "Nhap so thu tu can tim ngay: ";
	cin >> stt;
	cout << "\nNgay can tim: ";
	Xuat(TimNgay(stt));
	return 0;
}

void Xuat(NGAY x)
{
	cout << x.Ngay << "/" << x.Thang << "/" << x.Nam;
}

int KtNhuan(NGAY x)
{
	if (x.Nam % 4 == 0 && x.Nam % 100 != 0)
		return 1;
	if (x.Nam % 400 == 0)
		return 1;
	return 0;
}

int SoNgayToiDaCuaThang(NGAY x)
{
	int ngaythang[12] = { 31, 28, 31, 30, 31, 30, 31, 31,30, 31, 30, 31 };
		if (KtNhuan(x) == 1)
			ngaythang[1] = 29;
	return ngaythang[x.Thang - 1];
}

int SoNgayToiDaCuaNam(NGAY x)
{
	if (KtNhuan(x) == 1)
		return 366;
	return 365;
}

NGAY TimNgay(int Nam, int stt)
{
	NGAY temp = { 1, 1, Nam };
	temp.Thang = 1;
	while (stt - SoNgayToiDaCuaThang(temp) > 0)
	{
		stt = stt - SoNgayToiDaCuaThang(temp);
		temp.Thang++;
	}
	temp.Ngay = stt;
	return temp;
}

NGAY TimNgay(int stt)
{
	int Nam = 1;
	int sn = 365;
	while (stt - sn > 0)
	{
		stt = stt - sn;
		Nam++;
		NGAY temp = { 1, 1, Nam };
		sn = SoNgayToiDaCuaNam(temp);
	}
	return TimNgay(Nam, stt);
}
