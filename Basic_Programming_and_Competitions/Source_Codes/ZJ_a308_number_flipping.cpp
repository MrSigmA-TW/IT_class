#include <iostream>

using namespace std;

int main() {
    string s;
    int index = 0;
    cin >> s;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (!(s.at(i) == '0')) {
            index = i;
            break;
        }
    }
    for (int i = index; i >= 0; i--) {
        cout << s.at(i);
    }
    return 0;
}
