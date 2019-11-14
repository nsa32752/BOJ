#include <iostream>
using namespace std;

int comb(int N, int K){
    int res = 1;
    for(int i=N; i>=K; i--){
        res *= i;
    }
    for(int i=1; i<=K; i++){
        res /= i;
    }
    

}

int main(){
    int N, K;
    cin >> N >> K;
    cout << comb(N, K);

}