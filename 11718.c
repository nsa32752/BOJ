#include <stdio.h>

int main(void){
	char A[101];
	while(scanf("%[^\n]", A) != EOF){
		getchar();	
		printf("%s\n", A);
	}
	return 0;
}
