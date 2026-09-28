#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Sap xep noi bot (Bubble Sort) hoac Selection Sort
void sapXepTangDan(vector<int>& a) {
    int n = a.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sapXepTangDan(a);

    cout << "Day sau khi sap xep: ";
    for (int x : a) cout << x << " ";
    cout << endl;
    return 0;
}
  Thời gian: O(N^2)
  Bộ nhớ: O(1)
