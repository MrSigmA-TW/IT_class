#include <iostream>

using namespace std;

int main() {
    int n, k, mod;
    int a = 0;
    int b = 0;
    int c = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        mod = k % 3;
        switch(mod) {
            case 0:
                a++;
                break;
            case 1:
                b++;
                break;
            case 2:
                c++;
                break;
            default:
                break;
        }
    }
    cout << a << ' ' << b << ' ' << c << endl ;
    return 0;
}
