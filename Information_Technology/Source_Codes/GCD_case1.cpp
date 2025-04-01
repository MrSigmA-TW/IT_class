#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "Enter two numbers: ";
    int a, b, c;
    cin >> a >> b;

    while (b != 0) { // 當 b 不為 0 時繼續迴圈
        c = a % b; // 計算餘數
        a = b;    // 更新 a 為 b
        b = c;   // 更新 b 為餘數
    }

    cout << "GCD is " << a << endl; // 當 b 為 0 時，a 即為 GCD
    return 0;
}