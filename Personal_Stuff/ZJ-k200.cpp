#include <iostream>

using namespace std;

void judge(int& a, int b){
    if (b > a) a = b;
}

int main() {
    int a, b, c,temp;
    cin >> a >> b >> c;
    temp = 0;
    judge(temp, a);
    judge(temp, b);
    judge(temp, c);
    cout << temp;
    return 0; 
}