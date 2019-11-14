#include <stdio.h>
#include <string.h>

int main(){
  int M, N, U, L, R, D;
  char A[101][101] = {};
  char B[201][201] = {};
  scanf("%d%d", &M, &N);
  scanf("%d%d%d%d", &U, &L, &R, &D);
  for(int i = 0; i < M; i ++){
    scanf("%s", A[i]);
  }
  for(int i = 0; i < U + D + M; i ++){
    for(int j = 0; j < L + R + N; j ++){
      if((i + j) % 2 == 0){
        B[i][j] = '#';
      }
      else{
        B[i][j] = '.';
      }
    }
  }
  for(int i = U; i < M + U; i ++){
    for(int j = L; j < N + L; j ++){
        B[i][j] = A[i-U][j-L];
        }
  }
  for(int i = 0; i < U + D + M; i ++){
    for(int j = 0; j < L + R + N; j ++){
      printf("%c", B[i][j]);
    }
    printf("\n");
  }
}