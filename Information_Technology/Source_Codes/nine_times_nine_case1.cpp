#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for (size_t i = 1; i < 10; i++)
    {
        for (size_t j = 1; j < 10; j++)
        {
            cout << i << "*" << j << "=" << left << setw(2) << i*j << " " ;
        }
        cout << endl;
    }
    return 0;
}
