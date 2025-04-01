#include <iostream>
#include <vector>
#include <string>

using namespace std;

int min(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    cout << "Enter two numbers: ";
    int a, b, c;
    cin >> a >> b;
    c = min(a, b); // Find the minimum of a and b
    while (true) {
        if (a % c == 0 && b % c == 0) {
            cout << "GCD is " << c << endl; 
            break; // Exit the loop if GCD is found
        }
        c--;
    }
    return 0;
}