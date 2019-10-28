#include <stdio.h>
#include <math.h>

int main(){
	int a, b, c;
	long n, m;
	scanf("%d %d %d", &a, &b, &c);
	n = (-b + sqrt(b*b-4*a*c))/(2*a);
	m = (-b - sqrt(b*b-4*a*c))/(2*a);
	if((b*b-4*a*c) < 0){
		printf("둘다틀렸근");
		return 0;
	}
	else if(n>0 && m>0 && n != m){
		int k = sqrt(n);
		int j = sqrt(m);
		
		if(k % 2 == 0 && j % 2 == 0){
			printf("이수근");
			return 0;
		}
	}
	else if(n != m){
		printf("정수근");
		return 0;
	}
	else{
		printf("둘다틀렸근");
		return 0;
	}
}
