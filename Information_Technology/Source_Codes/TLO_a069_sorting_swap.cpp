#include <iostream>

using namespace std;

int main() {
    int n, A[55];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];  // 接收數值存到陣列A
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) { //Selection Sorting
            if (A[j] < A[k]) {
                swap(A[j], A[k]);//case 1:使用swap函數
            }
        }
    }
    for (int i = 0; i < n; i++) cout << A[i] << ' '; //輸出陣列A的所有元素
    return 0;
}