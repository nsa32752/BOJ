#include <stdio.h>

int main(){

	int T, d;
	scanf("%d", &T);
	for(int i=0;i<T;i++){
		int x = 0;
		scanf("%d", &d);
		while(x+x^2<d){
			x++;
		}
		printf("%d\n", x-1);
	}
	return 0;
}
