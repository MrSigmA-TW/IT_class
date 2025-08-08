#include <iostream>
#include <cmath>

using namespace std;

int D(int a,int b, int c){
    if (b*b-4*a*c>0){
        return 2;
    } else if (b*b-4*a*c==0)
    {
        return 1;
    } else return 0;
    
}

int BIG(int a, int b) {
    if (a>b) {
        return a;
    } else if (b>a)
    {
        return b;
    }
    
}

int SMALL(int a, int b) {
    if (a<b) {
        return a;
    } else if (b<a)
    {
        return b;
    }
    
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    switch (D(a,b,c))
    {
    case 1:
        cout << "Two same roots x=" << (-b) / (2 * a) << endl;
        break;
    case 2:
        cout << "Two different roots x1=" << BIG(((-b + sqrt(b*b-4*a*c)) / (2 * a)), ((-b - sqrt(b*b-4*a*c)) / (2 * a))) 
             << " , x2=" << SMALL(((-b + sqrt(b*b-4*a*c)) / (2 * a)), ((-b - sqrt(b*b-4*a*c)) / (2 * a))) << endl;
        break;
    default:
        cout << "No real root" << endl;
        break;
    }
}