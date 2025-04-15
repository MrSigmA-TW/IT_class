#include <iostream>
using namespace std;

int main() {
    int n, a, b, c, d, e, diff;
    while (cin >> n) {
        for (size_t i = 1; i <= n; i++)
            {
                e = 0;
                cin >> a >> b >> c >> d;
                if ( b-a == c-b )
                {
                    diff = b-a;
                    e = d + diff;
                } else
                {
                    diff = float(b)/float(a);
                    e = d * diff;
                }

                cout << a << " " << b << " " << c << " " << d << " " << e << endl;
            }
    }
    return 0;
}
