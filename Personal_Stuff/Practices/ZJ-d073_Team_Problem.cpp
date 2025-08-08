//此題為ZeroJdge的題目，題目網址為：https://zerojudge.tw/ShowProblem?problemid=d073
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
