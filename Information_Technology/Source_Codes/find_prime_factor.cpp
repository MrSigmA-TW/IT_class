#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    for (i = 2; i < sqrt(n); i++)
    {
        while (n%i==0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n>1)
    {
        cout << n << endl; // n is prime 
    }
    return 0;
}
