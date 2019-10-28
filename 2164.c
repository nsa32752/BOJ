#include <stdio.h>
#include <queue>

using namespace std;

int main(void){
	int n;
	queue <int> q;
	scanf("%d", &n);
	char order[n+1] = {};
	for(int i=1;i<n+1;i++){
		q.push(i);
	}
	while(q.size() != 1){
		int x;
		q.pop();
		x = q.front();
		q.pop();
		q.push(x);
	}
	printf("%d", q.front());

}
