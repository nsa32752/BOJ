#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int N, count=0;
    scanf("%d", &N);
    int A[N] = {0,};
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    
    for(int i=N-1; i>0; i--){
        while(A[i-1]>=A[i]){
                A[i-1]--;
                count++;
        }
    }
    printf("%d", count);
}