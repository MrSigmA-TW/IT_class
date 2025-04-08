#include <iostream>

using namespace std;

int a, b, c, d, m1, m2;

void isOver() {
    if (a + b + c + d == 0) 
    {
        exit(0); // 使用 exit(0) 結束整個程式
    }
}

int absolute(int x) {
    if (x < 0) return -x;
    return x;
}

int main() {
    while (cin >> a >> b >> c >> d) {
        isOver();
        m1 = a * 60 + b; // 將第一個時間轉換為分鐘數
        m2 = c * 60 + d; // 將第二個時間轉換為分鐘數

        int diff;
        if (m1 > m2) { 
            // 如果第一個時間晚於第二個時間，考慮跨日
            diff = 24 * 60 - (m1 - m2);
        } else {
            // 否則直接計算時間差
            diff = m2 - m1;
        }

        cout << diff << endl; // 輸出分鐘差
    }
    return 0;
}