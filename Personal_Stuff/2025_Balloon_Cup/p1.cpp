#include <iostream>

using namespace std;

int main(){
    long long n, k,ans=0;
    cin >> n >> k;
    int gua[n];

    for(int i=0; i<n; i++) {
        cin >> gua[i];
    }

    for (int j = 0; j < n; j++) {
        for (int k = j + 1; k < n; k++) {
            if (gua[j] < gua[k]) {
                swap(gua[j], gua[k]);
            }
        }
    }

    for(int i=0; i<(k);i++) {
        ans += gua[i];
    }
    cout << ans;
}
