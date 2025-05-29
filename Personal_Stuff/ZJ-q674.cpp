#include <iostream>

using namespace std;

int main() {
    long long int a, b, x, y, sol;
    while (cin >> a >> b >> x >> y) {
        sol = 0;
        sol = x * a + b;
        if (sol == y) {
            cout << "You are killed by Ryanbird." << '\n';
        } else {
            cout << "Oh no! Ryanbird is dying!" << '\n';
        }
    }
    return 0;
}