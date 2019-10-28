#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int A, B,tmp=1, num = 1, sum=0;
    cin >> A >> B;

    for(int i=1; i<=B; i++){
        if(i>=A) sum += num;
        tmp--;
        if(tmp == 0){
            num ++;
            tmp = num;
        }
    }

    cout << sum;
}