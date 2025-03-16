#include <iostream>
using namespace std;

int main()
{
    int num, group;
    while(cin >> num)
    {
        num = num + 2;
        group = num / 3;
        cout << group << endl;
    }
}
