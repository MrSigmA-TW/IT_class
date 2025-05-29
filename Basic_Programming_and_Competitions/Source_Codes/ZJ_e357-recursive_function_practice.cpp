#include <iostream>

using namespace std;

int rf(int a) {
    if (a == 1) {
        return 1;
    } else if (a % 2 == 0) {
        return rf(a / 2);
    } else {
        return rf(a - 1) + rf(a + 1);
    }
}

int main() {
    long long int x;
    cin >> x;
    cout << rf(x);
    return 0;
}