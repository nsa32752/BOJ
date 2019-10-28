#include <stdio.h>

int main(){
	int N;
	int num;
	int A[10000];
	scanf("%d", &N);
	for(int i=0; i<N+1; i++){
		scanf("%d", &A[i]);
	}
	for(int i=0; i<N+1; i++){
		if(i<N){
			if(A[i] == 1){
				num = (N-i)*2-1;
			}
			else num = (N-i)*2+1;
			num++;
		}
		else if(i==N){
			while(A[i] >= 10){
				num += 1;
				A[i] = A[i] % 10;
			}
			num++;
		}
		printf("%d %d\n", A[i], num);
	}
	printf("%d", num);
}
