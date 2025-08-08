#include <iostream>

using namespace std;

int main() {
    int fuel, tank, month,leap;
    while (cin >> tank) {
        month = 0;
        fuel = 0;
        if (tank == -1) break;
        fuel = 5 * tank + 5;
        while (fuel - tank - 1 >= 0) {  // 如果燃料充足
            fuel -= (tank + 1);
            month++;
            if (month % 5 == 0 && tank > 0) tank--;
        }
        cout << month << '\n';
    }

    return 0;
}