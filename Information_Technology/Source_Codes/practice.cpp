#include <iostream>
using namespace std;
int main()
{
    string input;
    while(cin >> input)
    {
        cout << "hello, " << input << endl;
    }
    if(input == "exit")
    {
        return 0;
    }

}
