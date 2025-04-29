#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int w;
    cin >> w;
    if (w > 50) {
        cout << w - 1 << endl;
    } else {
        cout << w << endl;
    }
    return 0;
}