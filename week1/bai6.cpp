#include <iostream>
#include <vector>

using namespace std;

void xoaPhanTu(vector<int>& a, int k) {
    if (k < 0 || k >= a.size()) return;
    a.erase(a.begin() + k);
}

void chenPhanTu(vector<int>& a, int m, int y) {
    if (m < 0 || m > a.size()) return;
    a.insert(a.begin() + m, y);
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int k, m, y;
    cout << "Nhap vi tri k can xoa: ";
    cin >> k;
    xoaPhanTu(a, k);

    cout << "Nhap vi tri m va gia tri y can chen: ";
    cin >> m >> y;
    chenPhanTu(a, m, y);

    cout << "Day ket qua: ";
    for (int x : a) cout << x << " ";
    cout << endl;
    return 0;
}
Thời gian: O(1)
Bộ nhớ: O(1)
