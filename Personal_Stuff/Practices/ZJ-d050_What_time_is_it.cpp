#include <iostream>

using namespace std;
//解失敗了
int main() {
    int h;
    cin >> h;
    int mountain_time = (h - 15 + 24) % 24;
    cout << mountain_time << endl;
    return 0;
}