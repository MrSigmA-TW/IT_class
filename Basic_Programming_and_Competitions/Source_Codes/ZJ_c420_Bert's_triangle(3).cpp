#include <iostream>

using namespace std;

int main() {
    int n, i, j, k;
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (2 * n - 1 - (2 * i - 1)) / 2; j++) {
            cout << '_';
        }

        for (k = 1; k <= 2 * i - 1; k++) {
            cout << '*';
        }

        for (j = 1; j <= (2 * n - 1 - (2 * i - 1)) / 2; j++) {
            cout << '_';
        }
        cout << '\n';
    }
    return 0;
}