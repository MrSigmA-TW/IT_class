#include <iostream>

using namespace std;

int cal_area_of_triangle(int a, int b, int c){
    int s = (a+b+c)/2;
    int output;
    output = s*(s-a)*(s-b)*(s-c);
    return output;
}

int main(){
    int a, b, c, s, result;
    cin >> a >> b >> c ;
    result = cal_area_of_triangle(a,b,c);
    cout << result << endl;
    return 0;
}
