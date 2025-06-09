#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        double total_armor = 0.0;
        double total_score = 0.0;
        cin >> k;
        for (int i = 0; i < k; i++) {
            long long m;
            double a, b, c, d;
            cin >> m >> a >> b >> c >> d;
            total_score += m * (a * 4 + b * 3 + c * 2 + d * 1);
            total_armor += m;
        }
        if (total_armor == 0) {
            cout << "ERR0R" << endl;
        } else {
            cout << fixed << setprecision(5) << total_score / total_armor
                 << endl;
        }
    }
    return 0;
}
