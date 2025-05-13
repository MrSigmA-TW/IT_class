#include <iostream>

using namespace std;

int main() {
    int N,x,y,nx,ny;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> x >> y;
        if ((x-2)%3 == 0){
            nx = (x-2)/3;
        } else {
            nx = (x-2)/3+1;
        }
        if ((y-2)%3 == 0){
            ny = (y-2)/3;
        } else {
            ny = (y-2)/3+1;
        }
        cout << nx*ny << endl;
    }
    return 0;
}
