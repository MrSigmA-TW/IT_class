#include <iostream>

using namespace std;

int main() {
    int m;
    cin >> m;
    if (m<25||m==25) {
        cout << 25-m << endl;
    } else {
        cout << 85-m << endl;
    }
    return 0;
}