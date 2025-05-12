#include <iostream>
using namespace std;

bool laSoNguyenTo(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n, x;
    cout << "Nhap vao so luong so nguyen duong n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Nhap so thu " << i << ": ";
        cin >> x;

        if (laSoNguyenTo(x)) {
            cout << x << " la so nguyen to." << endl;
        } else {
            cout << x << " khong phai la so nguyen to." << endl;
        }
    }

    return 0;
}
