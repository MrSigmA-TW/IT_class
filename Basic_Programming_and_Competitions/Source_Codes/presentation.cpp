#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

int ABS(double a) {
    if (a < 0.0) return -1 * a;
    if (a > 0.0) return a;
}

int main() {
    int n, k;
    cin >> n >> k;
    double total_armor = 0.0;
    double total_score = 0.0;
    bool isError = false;
    for (int i = 0; i < n; i++) {
        long long m;
        double a, b, c, d;
        cin >> m >> a >> b >> c >> d;
        double sum = a + b + c + d;
        if (ABS(sum - 1.0) > 1e-6) {
            isError = true;
            break;
        }
        total_score += m * (a * 4 + b * 3 + c * 2 + d * 1);
        total_armor += m;
    }
    if (isError || total_armor == 0) {
        cout << "ERR0R" << endl;
    } else {
        cout << fixed << setprecision(5) << total_score / total_armor << endl;
    }
    return 0;
}

/*
k代表有接下來有幾張地圖需要計算
n代表有幾個興趣點(0<n<2148473647)
每行先輸入m(每個興趣點預計生成幾個護甲 0<m<2148473647)
a, b ,c ,d 分別代表這個興趣點金甲、紫甲、藍甲、白甲的生成機率
4, 3, 2, 1 分別代表每個金甲、紫甲、藍甲、白甲的稀有度權重
請幫地圖設計師計算出整張地圖的平均稀有度(精確到小數點後第10位)
如果無法計算，請直接輸出"ERR0R"
*/