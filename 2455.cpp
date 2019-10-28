#include <stdio.h>
#include <iostream>

using namespace std;

int main(){

    int A, B, people=0, max=0;
    for(int i=0; i<4; i++){
        cin >> A >> B;
        people += (B-A);
        if(people > max) max = people;
    }
    cout << max;
}