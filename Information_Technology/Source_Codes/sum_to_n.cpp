#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    int i = 1;
    int sum = 0;
    cin >> n;
    while(i <= n){
        sum += i;
        i++;
    }
    cout << "sum is " << sum << endl;
    return 0;
}
