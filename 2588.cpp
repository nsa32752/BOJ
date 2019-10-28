#include <stdio.h>

int main(){
    int N, M;
    scanf("%d", &N);
    scanf("%d", &M);
    printf("%d\n", N*(M%10));
    printf("%d\n", N*((M/10)%10));
    printf("%d\n", N*(M/100));
    printf("%d\n", N*M);
       

}