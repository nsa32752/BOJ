#include <stdio.h>

int fibonacci(int n);

int zero=0;
int one=0;

int main(){
	int T;
	char A[3];
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		while(scanf("%[^\n]", A) != EOF){
		k = fibonacci(N);
	    printf("%d %d %d\n", k, zero, one);	
		zero = 0;
		one = 0;
		}
	}
}

int fibonacci(int n){
	if(n=0){
		zero++;
		return 0;
	}
	else if(n==1){
		one++;
		return 1;
	}
	else{
	return fibonacci(n-1)+fibonacci(n-2);
	}
}
