#include <stdio.h>

int main(){
    int N, X;
    scanf("%d %d", &N, &X);
    for(int i=0; i<N; i++){
        int k;
        scanf("%d", &k);
        if(k < X) printf("%d ", k);
    }
}


