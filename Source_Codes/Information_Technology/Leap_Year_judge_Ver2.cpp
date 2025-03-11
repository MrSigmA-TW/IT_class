#include <iostream>
using namespace std;
int main()
{
    int year;
    while(cin >> year)
    {
        if ( (year%4 == 0 )|| (year%400 ==0))
    {
        cout << "it's a leap year!"<< endl;
    }
    else
    {
        cout << "it's a normal year!"<< endl;
    }
    }
    return 0;
}
