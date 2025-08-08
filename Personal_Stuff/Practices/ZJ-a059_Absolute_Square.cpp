#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, a, b, sum;
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum = 0;
        cin >> a >> b;
        for (int j = a; j <= b; j++) {
            int root = sqrt(j);
            if (root * root == j) {
                sum += j;
            }
        }
        cout << "Case " << i + 1 << ": " << sum << endl;
    }
    return 0;
}