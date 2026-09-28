#include <iostream>
#include <vector>

using namespace std;

long long tinhTong(const vector<int>& a) {
    long long sum = 0;
    for (int x : a) {
        sum += x;
    }
    return sum;
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<int> a(n);
    cout << "Nhap " << n << " phan tu: ";
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << "Tong: " << tinhTong(a) << endl;
    return 0;
}
