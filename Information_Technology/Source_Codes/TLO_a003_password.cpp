#include <iostream>

using namespace std;

int ABS(int a) {
    if (a > 0) return a;
    if (a < 0) return -1 * a;
}

int main() {
    string s;
    int result[6] = {0};
    while (cin >> s) {
        for (int i = 0; i < 6; i++) result[i] = 0;
        for (int i = 0; i < 6; i++) {
            result[i] = ABS((int(s.at(i + 1)) - int(s.at(i))));
        }
        for (int i = 0; i < 6; i++) cout << result[i];
    }
    return 0;
}
