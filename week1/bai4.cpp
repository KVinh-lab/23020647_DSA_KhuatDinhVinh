#include <iostream>

using namespace std;

// Ham tim uoc chung lon nhat (UCLN)
int ucln(int x, int y) {
    x = abs(x);
    y = abs(y);
    while (y != 0) {
        int r = x % y;
        x = y;
        y = r;
    }
    return x;
}

void rutGonPhanSo(int &a, int &b) {
    if (b == 0) {
        cout << "Mau so khong hop le!" << endl;
        return;
    }
    int g = ucln(a, b);
    a /= g;
    b /= g;
    if (b < 0) { // Đưa dấu âm lên tử số
        a = -a;
        b = -b;
    }
}

int main() {
    int a, b;
    cout << "Nhap tu so a va mau so b: ";
    cin >> a >> b;

    rutGonPhanSo(a, b);
    cout << "Phan so sau khi rut gon: " << a << "/" << b << endl;
    return 0;
}
Thời gian: O(logN)
Bộ nhớ: O(1)
