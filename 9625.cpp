#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int K, A=1, B=0, tmp;
    cin >> K;
    for(int i=0; i<K; i++){
        tmp = B;
        if(A>0){
            B += A;
            A = 0;
        } 
        if(B>0 && i != 0){
            A += tmp;
        }
    }

    cout << A << " " << B;


}