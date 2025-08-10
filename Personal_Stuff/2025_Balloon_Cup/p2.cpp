#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long a[n], b[n];
    int CASE=0;
    bool isAsame=1, isBsame=1 ;

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<n; i++) {
        cin >> b[i];
    }

    long long target_a=a[0], target_b=b[0];

    for(int i=0; i<n-1; i++) {
        isAsame *= (a[i] == a[i+1]);
    }
    for(int i=0; i<n-1; i++) {
        isBsame *= (b[i] == b[i+1]);
    }

    for(int i=0; i<n-1; i++) {
        if(!(a[i]==a[i+1])) {
         target_a =a[i+1];
         if(!(target_a == a[0])) break;
        }
    }
    for(int i=0; i<n-1; i++) {
        if(!(b[i]==b[i+1])) {
            target_b =b[i+1];
            if(!(target_b == b[0])) break;
        }
    }

    //cout << "-----" << endl <<target_a << ' ' << target_b << endl <<"-----"<<endl;

    if(target_a==0 && target_b==0){
     cout << "No";
     return 0;
    }
    if(isAsame==1 && isBsame==1) cout << "Inf"; //即線段重疊
    if(isAsame==0 && isBsame==1) cout << "0 1"; //即交於y軸一點
    if(isAsame==1 && isBsame==0) cout << "No"; //即全部平行
    if(isAsame==0 && isBsame==0) {
        cout << b[0]-target_b << ' ' << target_a - a[0];
    }

}
