#include <iostream>
using namespace std;
int main()
{
    cout << "請輸入字元" << endl;
    char orginal, after;
    while(cin >> orginal)
        {
        after = orginal - 32;
        cout << after << endl;
        }
}
