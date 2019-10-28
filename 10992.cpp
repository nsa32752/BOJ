#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=1; j<2*N; j++){
        	if(i == N-1) cout << "*";
            else if(j == N-i) cout << "*";
            else if(j == N+i) cout << "*";
            else if(j < N+i) cout << " ";
        }
        cout << "\n";
    }
}