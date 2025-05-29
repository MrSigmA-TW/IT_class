#include <iostream>

using namespace std;

int main() {
    int n,temp,A[55];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> A[i];  // 接收數值存到陣列A
    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) { //Selection Sorting
            if (A[j] < A[k]) {
                temp = A[j]; //case 2:使用傳統方法置換
                A[j] = A[k];
                A[k] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << A[i] << ' '; //輸出陣列A的所有元素
    return 0;
}