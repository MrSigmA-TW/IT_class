#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    ll A[n];
    ll B[n];
    for (int i = 0; i < n; i++) cin >> B[i];
    A[0] = B[0];
    for (int j = 1; j <= n; j++) {
        A[j] = 0;
        A[j] = B[j] - B[j - 1];
    }

    for (int i = 0; i < n; i++) {
        cout << A[i] << ' ';
    }
    return 0;
}
