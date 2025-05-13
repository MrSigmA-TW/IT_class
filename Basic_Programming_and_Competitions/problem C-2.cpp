#include <iostream>

using namespace std;

int main() {
    int N;
    int n1=0;
    int n2=0;
    int n3=0;
    cin >> N;
    int k[N];
    int O[N];
    for(int i=0;i<N;i++) {
        cin >> k[i];
    }
    for(int i=0;i<N;i++){
        if(k[i]==1) n1++;
        if(k[i]==2) n2++;
        if(k[i]==3) n3++;
    }
    for(int i=0;i<n1;i++){
        O[i] = 1;
    }
    for(int i=n1;i<=(n1+n2-1);i++){
        O[i] = 2;
    }
    for(int i=(n1+n2);i<N;i++){
        O[i] = 3;
    }
    for(int i=0;i<N;i++) {
        cout << O[i] << ' ';
    }
    return 0;
}
