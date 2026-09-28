#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cout << "Nhap N: ";
    cin >> n;
    vector<double> a(n);
    double sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    double avg = sum / n;
    cout << "Gia tri trung binh: " << avg << endl;
    cout << "Cac phan tu >= trung binh: ";

    for (double x : a) {
        if (x >= avg) {
            cout << x << " ";
        }
    }
    cout << endl;
    return 0;
}
Thời gian: O(N)
Bộ nhớ: O(N)
