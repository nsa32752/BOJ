#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, M;
    cin >> N >> M;

    if(M-45 <0) {
        M = 60 + (M-45);
        N -= 1;
        if (N == -1) N = 23;
    }
    else M -=45;
    cout << N <<" ";
    if (M != 0) cout << M;

}