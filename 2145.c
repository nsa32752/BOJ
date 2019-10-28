#include <stdio.h>

int main(){
	int k = 1;
	while(k != 0){
		int sum = 0;
		int fin = 0;
		int fin2 = 0;
		scanf("%d", &k);
		if(k!=0){
			while(k >= 10){
				sum += k % 10;
				k = k /10;
		}
		sum += k;
			while(sum >= 10){
				fin += sum % 10;
				sum = sum / 10;
			}
		fin += sum;
		while(fin >= 10){
			fin2 += fin %10;
			fin = fin / 10;
		}
		if(fin2 != 0){
			fin2 += fin;
		}
		}
		if(k == 0){
			break;
		}
		if(fin2 != 0){
			printf("%d\n", fin2);
		}
		else{
			printf("%d\n", fin);
		}
	}
	

	return 0;
}
