#include <iostream>

using namespace std;

int MIN(int a, int b) {
    if (a > b) return b;
    if (b > a) return a;
}

int abs(int a) {
    if (a > 0) return a;
    if (a < 0) return -a;
}

int main() {
    int a, b, c, d, cw, alcw;
    cin >> a >> b >> c >> d;
    cw = 720;
    cw += 9 * MIN(abs(b - a), abs(b + 40 - a));
    alcw = 360;

    return 0;
}
