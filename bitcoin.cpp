// bai bitcoin Bích Uyên gửi (Chưa biết đúng hay không)
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int gia_khoi_diem_bitcoin = 20000;


int main() {
	//input: nhap gia tri bitcoin
	
	vector<int> gia_bitcoin;
	int number;
	cout << "Gia cua bitcoin o tung thoi diem (Nhan Ctrl + D de ket thuc nhap): ";
	while (cin >> number) {
		gia_bitcoin.push_back(number);
	}

	//kiem tra xem ds gia bitcoin nhap vao co rong hay khong
	if (gia_bitcoin.empty()) {
		cout << "Khong co gia tri" << endl;
		return 0;
	}

	//tim gia thap nhat cua bitcoin
	int min_bitcoin = gia_bitcoin[0];
	for (int i = 0; i < gia_bitcoin.size(); ++i) {
		if (gia_bitcoin[i] < min_bitcoin) {
			min_bitcoin = gia_bitcoin[i];
		}
	}

	// tim gia thap nhat cua bitcoin
	int max_bitcoin = gia_bitcoin[0];
	for (int i = 0; i < gia_bitcoin.size(); ++i) {
		if (gia_bitcoin[i] > max_bitcoin) {
			max_bitcoin = gia_bitcoin[i];
		}
	}

	// tinh tien loi, tien lo tu viec choi bitcoin
	int tien_loi;
	int tien_lo;
	if (max_bitcoin > gia_khoi_diem_bitcoin) {
		tien_loi = max_bitcoin - gia_khoi_diem_bitcoin;
	}
	cout << "Tien loi cao nhat co the co duoc tu viec dau tu bitcoin: " << tien_loi << endl;

	if (!(min_bitcoin <= 20000)) {
		tien_lo = 0;
	}
	if (min_bitcoin < gia_khoi_diem_bitcoin) {
		tien_lo = abs(min_bitcoin - gia_khoi_diem_bitcoin);
	}
	cout << "Tien lo co the mat tu viec dau tu bitcoin: " << tien_lo << endl;
	return 0;
}