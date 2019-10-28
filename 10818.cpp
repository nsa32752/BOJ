#include <stdio.h>
#include <iostream>
#include <istream>

using namespace std;

int main(){
    int N, min, max;
    cin >> N;
    int num[N] = {0,};
    for(int i=0; i<N; i++) cin >> num[i];
    min = num[0];
    max = num[0];
    for(int i=1; i<N; i++){
        if(num[i] < min) min = num[i];
        if(num[i] > max) max = num[i];
    }
    cout << min << " " << max;
}