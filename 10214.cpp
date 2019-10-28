#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int Y=0, K=0, YS, KS;
    for(int i=0; i<N; i++){
        Y=0;
        K=0;
        for(int j=0; j<9; j++){
            cin >> YS >> KS;
            Y += YS;
            K += KS;
        }
    if(Y > K) cout << "Yonsei\n";
    else if(Y < K) cout << "Korea\n";
    else cout << "Draw\n";
    }
}