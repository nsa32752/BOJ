#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int N, profit=0;
	cin >> N;
	int pay[N+1]={0,}, time[N+1]={0,}, dp[N+1]={0,};
	for(int i=1; i<=N; i++){
		cin >> time[i] >> pay[i];
		dp[i] = pay[i];
	}
	for(int i=2;i<=N;i++){
		for(int j=1; j<i; j++){
			if(i-j>=time[j]) dp[i] = max(pay[i]+dp[j], dp[i]);
		}
	}
	

	
	for(int i=1;i<=N;i++){
		if(i+time[i]<=N+1){
			if(profit<dp[i]) profit = dp[i];
		}
	}
	
	cout << profit;
	return 0;
}
