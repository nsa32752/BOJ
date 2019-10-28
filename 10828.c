#include <stdio.h>
#include <stack>

using namespace std;

int main(void){
	stack<int> s;
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++){
		char order[8] = {};
		scanf("%s", order);
		if(order[0]=='p' && order[1]=='u'){
			int x;
			scanf("%d", &x);
			s.push(x);
		}
		if(order[0]=='p' && order[1]=='o'){
			if(s.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",s.top());
				s.pop();
			}
		}
		if(order[0]=='s'){
			printf("%d\n", s.size());
		}
		if(order[0]=='e'){
			if(s.empty()){
				printf("1\n");
			}
			else{
				printf("0\n");
			}
			
		}
		if(order[0]=='t'){
			if(s.empty()){
				printf("-1\n");
			}
			else{
				printf("%d\n",s.top());
			}
		
		}
	
	}
}
