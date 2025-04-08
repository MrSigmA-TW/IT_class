#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    for (size_t k = 1; k < 9; k++)
    {
        for (size_t i = 1; i < k; i++)
    {
            for (size_t j = 1; j < 10; j++)
            {
                cout << i << "*" << j << "=" << left << setw(2) << i*j << " " ;
            }
    }
    cout << endl;
    }
    // git config user.email "andy20161515@gmail.com"
    // git config user.name "ΣR.SigmA"

    
    return 0;
}
