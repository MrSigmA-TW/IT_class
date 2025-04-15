#include <iostream>

using namespace std;

// 遞迴函數：計算將 n 拆分成不大於 m 的整數的方式數量
int partition(int n, int m) {
    if (n == 0) return 1; // 當 n 為 0 時，只有一種方式
    if (n < 0 || m == 0) return 0; // 當 n < 0 或 m == 0 時，無法拆分
    return partition(n - m, m) + partition(n, m - 1); // 遞迴計算
}

int main() {
    int n;
    cout << "請輸入正整數 n: ";
    cin >> n;

    // 計算並輸出結果
    cout << "P(" << n << ") = " << partition(n, n) << endl;

    return 0;
}
