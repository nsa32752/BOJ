#include <stdio.h>

int main(void) {
	int A[100][100] = {};
	int B[10000] = {};
	int N;
	scanf("%d", &N);
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
			scanf("%d", &A[i][j]);
			if(A[i][j] <= 0){
				printf("FALSE");
				return 0;
			}
			else if(A[i][j] > N*N){
				printf("FALSE");
				return 0;
			}
		}
	}
	for(int i = 0; i<N; i++){
		for(int j = 0; j<N; j++){
		B[A[i][j]] = 1;
		}
	}
	for(int i = 1; i<N*N+1; i++){
		if(B[i] >= 2){
			printf("FALSE");
			return 0;
		}
		if(B[i] == 0){
			printf("FALSE");
			return 0;
		}
		}
	int S1 = 0;
	int S3 = 0;
	for(int i = 0; i<N; i++){
		int S = 0;
		int S2 = 0;
		S1 += A[i][i];
		S3 += A[i][N-i-1];
		for(int j = 0; j < N; j++){
			S += A[i][j];
			S2 += A[j][i];
		}
		if(S != (N*(N*N+1))/2){
			printf("FALSE");
			return 0;
		}
		if(S2 != (N*(N*N+1))/2){
			printf("FALSE");
			return 0;
		}
	
	}
	if(S3 != (N*(N*N+1))/2){
			printf("FALSE");
			return 0;
		}
	if(S1 != (N*(N*N+1))/2){
			printf("FALSE");
			return 0;
		}
	printf("TRUE");
	return 0;
}