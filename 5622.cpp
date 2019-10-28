#include <iostream>

using namespace std;

int main(){
    char A[16] = {'\0',};
    scanf("%s", &A);
    int i=0, sum=0;
    while(A[i] != '\0'){
        if(65<=A[i]<=67) sum += 3;
        else if(68<=A[i]<=70) sum += 4;
        else if(71<=A[i]<=73) sum += 5;
        else if(74<=A[i]<=76) sum += 6;
        else if(77<=A[i]<=79) sum += 7;
        else if(80<=A[i]<=83) sum += 8;
        else if(84<=A[i]<=86) sum += 9;
        else if(87<=A[i]<=90) sum += 10;
        else sum += 11;
        i++;
    cout << sum;
    }
    cout << sum;
}