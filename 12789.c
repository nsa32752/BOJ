#include <stdio.h>
#include <queue>

using namespace std;

int main(void){
	int n;
	queue <int> q;
	scanf("%d", &n);
	int A[1000] = {0,};
	int k = 1;
	for(int i=1; i<n+1; i++){
		scanf("%d", &A[i]);
	}
	for(int i=1;i<n+1;i++){
		if(A[i] == k){
			A[i] = 0;
			k++;
		}
	}
	for(int i=n; i>0; i--){
		if(A[i] != 0){
			q.push(A[i]);
		}
	}
	while(q.size() != 0){
		if(q.front() != k){
		printf("Sad");
		break;
		}
		else{
		q.pop();
		k++;
		}
	}
	if(q.size() == 0){
		printf("Nice");
	}
}
