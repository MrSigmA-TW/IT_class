#include <algorithm>  // 引入演算法庫，用於 max() 和 reverse() 函數
#include <iostream>   // 引入輸入輸出庫，用於 cin 和 cout

using namespace std;  // 使用標準命名空間，避免寫 std::

int main() {
    string a, b, ans;    // 宣告三個字串：a和b存輸入的大數，ans存結果
    cin >> a >> b;       // 從標準輸入讀取兩個字串形式的大數
    int carry = 0, sum;  // carry存進位值，sum存當前位數的和
    int maxLength = max(a.length(), b.length());  // 取得兩個數字中較長的長度

    // 將兩個字串補齊到相同長度（前面補0）
    a = string(maxLength - a.length(), '0') +
        a;  // 在a前面補0，使其長度等於maxLength
    b = string(maxLength - b.length(), '0') +
        b;  // 在b前面補0，使其長度等於maxLength

    // 從右到左逐位相加（模擬手算加法）
    for (int i = maxLength - 1; i >= 0; --i) {  // 從最右邊（個位數）開始往左
        sum = (a[i] - '0') + (b[i] - '0') + carry;  // 將字元轉數字並加上進位
        carry = sum / 10;                           // 計算新的進位值（0或1）
        ans.push_back((sum % 10) + '0');  // 將個位數轉回字元並加到ans尾端
    }

    // 處理最後的進位
    if (carry > 0) {                 // 如果最高位還有進位
        ans.push_back(carry + '0');  // 將進位加到結果中
    }

    // 反轉結果字串（因為是從低位開始存入）
    reverse(ans.begin(), ans.end());  // 反轉ans，因為我們是從個位數開始存入

    // 移除前導零
    int start = 0;  // 記錄第一個非零字元的位置
    while (start < ans.length() - 1 &&
           ans[start] == '0') {  // 找到第一個非零字元
        start++;                 // 跳過前導零
    }
    ans = ans.substr(start);  // 從第一個非零字元開始取子字串

    cout << ans << endl;  // 輸出最終結果

    return 0;  // 程式正常結束
}
