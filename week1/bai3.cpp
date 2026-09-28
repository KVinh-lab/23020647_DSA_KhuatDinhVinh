#include <iostream>

using namespace std;

long long tinhGiaiThua(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    if (n < 0) {
        cout << "Khong hop le!";
    } else {
        cout << n << "! = " << tinhGiaiThua(n) << endl;
    }
    return 0;
}
Thời gian: O(N)
Bộ nhớ:O(1)
