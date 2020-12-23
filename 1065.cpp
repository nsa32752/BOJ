#include <iostream>
using namespace std;

int main() {
	int N, res=0;
	cin >> N;
	if(N<100) res=N;
	else{
		res=99;
		for(int i=100; i<=N; i++){
			if((i/100-(i/10)%10)==((i/10)%10-i%10)) res++;	
		}
	}	
	cout << res;
	return 0;
}
