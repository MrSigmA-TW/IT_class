#include <iostream>

using namespace std;

int main() {
    int n;
    int year;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> year;
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    cout << "a leap year" << endl;
                } else {
                    cout << "a normal year" << endl;
                }
            } else {
                cout << "a leap year" << endl;
            }
        } else {
            cout << "a normal year" << endl;
        }
    }
    return 0;
}
