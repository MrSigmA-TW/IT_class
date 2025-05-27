#include <cmath>
#include <iostream>
#define N 1000

using namespace std;

int main() {
    bool p[N + 1];
    for (int i = 2; i <= N; i++) p[i] = true;
    for (int i = 2; i <= N; i++) {
        if (p[i] == true) {
            for (int j = 2 * i; j <= N; j += i) {
                p[j] = false;
            }
        }
    }
    int factor_counter = 0;
    for (int i = 2; i <= N; i++) {
        if (p[i] == true) cout << i << ' ';
        if (p[i] == true) factor_counter++;
    }
    cout << '\n';
    cout << "There are" << ' ' <<factor_counter << ' ' <<"factors from 1 to N" << '\n';
    return 0;
}
