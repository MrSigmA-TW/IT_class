#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll A[n];
    ll B[n];
    for (int i = 0; i < n; i++) cin >> A[i];
    B[0] = A[0];
    for (int i = 1; i <= n;i++){
        B[i] = 0;
        B[i] += B[i - 1] + A[i];
    }
    /*
    for (int i = 0; i < n;i++) {
        B[i] = 0;
        for (int j = 0; j <= i;j++) {
            B[i] += A[j];
        }
    }
    */
    for (int i = 0; i < n; i++) {
        cout << B[i] << ' ';
    }
    return 0;
}
