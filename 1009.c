#include <stdio.h>

int main(){
	int T;
	int a, b;
	scanf("%d", &T);
	for(int i=0; i<T; i++){
		scanf("%d %d", &a, &b);
		int num = 1;
		for(int j=0; j<b;j++){
			num = (num * a)%10;
		}
		if(num == 0){
			printf("10\n");
		}
		else{
		printf("%d\n", num);
		}
	}
	
	return 0;
}
