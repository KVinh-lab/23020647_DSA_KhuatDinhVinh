#include <iostream>
#include <vector>

using namespace std;

long long tinhTong2D(const vector<vector<int>>& mat) {
    long long sum = 0;
    for (const auto& row : mat) {
        for (int x : row) {
            sum += x;
        }
    }
    return sum;
}

void xoaDong(vector<vector<int>>& mat, int i) {
    if (i < 0 || i >= mat.size()) return;
    mat.erase(mat.begin() + i);
}

int main() {
    int n, m;
    cout << "Nhap N va M: ";
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    cout << "Nhap cac phan tu ma tran:\n";
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < m; c++) {
            cin >> mat[r][c];
        }
    }

    cout << "Tong cac phan tu: " << tinhTong2D(mat) << endl;

    int row_to_delete;
    cout << "Nhap chi so dong i can xoa: ";
    cin >> row_to_delete;
    xoaDong(mat, row_to_delete);

    cout << "Ma tran sau khi xoa dong:\n";
    for (const auto& row : mat) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
Thời gian: O(N x M)
Bộ nhớ: O(1)
