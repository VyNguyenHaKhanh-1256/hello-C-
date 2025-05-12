#include <iostream>
using namespace std;

int nhapSoNhanVien() {
    int n;
    do {
        cout << "Nhap so nhan vien: ";
        cin >> n;
        if (n <= 0) {
            cout << "So nhan vien phai la so nguyen duong. Vui long nhap lai." << endl;
        }
    } while (n <= 0);
    return n;
}

int tongNgayNghi(int soNhanVien) {
    int tong = 0, ngayNghi;

    for (int i = 1; i <= soNhanVien; i++) {
        do {
            cout << "Nhap so ngay nghi cua nhan vien thu " << i << ": ";
            cin >> ngayNghi;
            if (ngayNghi < 0) {
                cout << "So ngay nghi khong duoc am. Vui long nhap lai." << endl;
            }
        } while (ngayNghi < 0);
        tong += ngayNghi;
    }

    return tong;
}

double tinhTrungBinh(int soNhanVien, int tongNgayNghi) {
    return static_cast<double>(tongNgayNghi) / soNhanVien;
}

int main() {
    int soNhanVien = nhapSoNhanVien();
    int tongNghi = tongNgayNghi(soNhanVien);
    double trungBinh = tinhTrungBinh(soNhanVien, tongNghi);

    cout << "\nTong so ngay nghi: " << tongNghi << endl;
    cout << "Trung binh so ngay nghi cua moi nhan vien: " << trungBinh << endl;

    return 0;
}
