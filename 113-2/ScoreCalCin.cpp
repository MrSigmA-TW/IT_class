#include <iostream>
using namespace std;

int main()
{
   int CS, ES, total;
   cout << "Enter Chinese score: ";
   cin >> CS;
   cout << "Enter English score: ";
   cin >> ES;
   total = CS + ES;
   cout << "Total score is " << total << endl;
   return 0;
}