#include <iostream> //位移7

using namespace std;

int main() {
    string a;
    char b;
    while(!(b == ' ')){
        cin.get(b);
        b = char(b - 7);
        getline(cin, a);
        cout << b;
    }
    return 0;
}