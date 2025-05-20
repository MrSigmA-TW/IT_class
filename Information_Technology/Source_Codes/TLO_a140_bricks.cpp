#include <iostream>

using namespace std;

int main() {
    int n, sum, avg, ans, count=0, A[105];
    while(cin >> n && n>0) {
        for (int i = 0; i < n; i++) cin >> A[i]; //輸入所有數據到Arrey A[]
        sum = 0;
        for (int i = 0; i < n; i++) sum += A[i]; //計算A[]總和
        avg = sum / n;
        ans = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] > avg){
                ans += A[i] - avg;
            }
        }
        count++;
        cout << "Set #" << count << '\n';
        cout << "The minimum number of moves is " << ans << '.' << '\n';
    }
    return 0;
}