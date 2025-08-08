#include <iostream>

using namespace std;

int main() {
    int a, b,count;
    cin >> a >> b;
    for (int i = a; a <= b;i++){
        count += (i % 2) * (i % 2 == 0);
    }
    cout << count;
    return 0;
}