#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int N, n, cycle = 0;
    cin >> N;
    n = N;
    while(1){
        n = (n%10)*10+((n%10+n/10)%10);
        cycle++;
        if (N == n && cycle != 0) break;
    }    
    cout << cycle;
}