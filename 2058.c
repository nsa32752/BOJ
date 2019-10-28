#include <stdio.h>

int main(){
	int N, sum=0;
	scanf("%d", &N);
	while(N>10){
		sum += N % 10;
		N /= 10;
	}
	sum += N;
	printf("%d", sum);

	return 0;
}
