#include <iostream>

using namespace std;

class area {
   private:
    /* data */
   public:
    float generate_percent = 0.5;
    float goods_A = 0.1;
    float goods_B = 0.3;
    float goods_C = 0.6;
};

int main() {
    int n;
    cin >> n;
    area k,l,m;
    cout << n * k.generate_percent << ' ' << n * l.generate_percent << ' ' << n * m.generate_percent;
    return 0;
}
