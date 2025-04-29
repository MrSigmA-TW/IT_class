#include <iostream>

using namespace std;

void leapYearJudge(int a){
    if (a%4 == 0) {
        if (a%100 == 0)
        {
            if (a%400 == 0)
            {
                cout << "a leap year" << endl ;
            } else{
                cout << "a normal year" << endl ;
            }
        } else
        {
            cout << "a leap year" << endl ;
        }
    } else {
        cout << "a normal year" << endl;
    }
}

int main() {
    int year;
    while(cin >> year){;
        if(year == 0) break;
        leapYearJudge(year);
    }
    return 0;
}
