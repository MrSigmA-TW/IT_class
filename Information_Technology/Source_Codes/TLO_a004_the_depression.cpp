#include <iostream>

using namespace std;

int main() {
    int sum, n,m,k;
    cin >> n;
    sum = 0;
    for (int i = 1; i <= n;i++) {
        cin >> k;
        sum += k*i;
    }
    cout << sum << '\n';
    return 0;
}