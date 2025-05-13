#include <iostream>

using namespace std;

int main() {
    int N;
    int c;
    cin >> N;
    int k[N];
    for(int i=0;i<N;i++) {
        cin >> k[i];
    }
    for(int j=0;j<N;j++){
        if (k[j+1] < k[j]) {
            c = k[j+1];
            k[j+1] = k[j];
            k[j] = c;
        }
    }
    for(int i=0;i<N;i++){
        cout << k[i] << ' ';
    }
    return 0;
}
