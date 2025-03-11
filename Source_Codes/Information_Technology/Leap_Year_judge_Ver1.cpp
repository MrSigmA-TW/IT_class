#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "請輸入年分(西元)" << endl;
    while(cin >> year)
    {
       if (year%4 == 0)
    {
        if (year%100 == 0)
        {
            if (year%400 == 0)
            {
                cout << "it's a leap year!" << endl;
            }
            else
            {
                cout << "it's a normal year!" << endl;
            }
        }
        else
        {
            cout << "it's a leap year!" << endl;
        }
    }
    else
    {
        cout << "it's a normal year!" << endl;
    }
    }
    return 0;
}
