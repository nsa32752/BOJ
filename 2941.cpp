#include <stdio.h>
#include <string.h>
#include <iostream>

using namespace std;

int main(){
    string A;
    int num = 0;
    cin >> A;
    int i=0;
    while(A[i] != '\0'){
        if(A[i]=='c'){
            if(A[i+1] == '='){
                i++;
            }
            else if(A[i+1] == '-'){
                i++;
            }
        }
        else if(A[i] == 'd'){
            if(A[i+1] == 'z' && A[i+2] == '='){
                i += 2;
            }
            else if(A[i+1] == '-'){
                i += 1;
            }
        }
        else if(A[i] == 'l' && A[i+1] == 'j'){
            i++;
        }
        else if(A[i] == 'n' && A[i+1] == 'j'){
            i++;
        }
        else if(A[i] == 's' && A[i+1] == '='){
            i++;
        }
        else if(A[i] == 'z' && A[i+1] == '='){
            i++;
        }
        i++;
        num++;
    }
    cout << num;
}