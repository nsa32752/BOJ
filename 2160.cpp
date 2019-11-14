#include <iostream>

using namespace std;

int main(){

    int N;
    cin >> N;
    char A[N][5][7];
    for(int i=0; i<N; i++){
        for(int j=0; j<5; j++){
            cin >> A[i][j];
        }
    }
    
    int comp = 0, max = 35;
    int F=0, S=0;

    for(int i=0; i<N-1; i++){
        for(int l=i+1; l<N; l++){
            comp = 0;
            for(int j=0; j<5; j++){
                for(int k=0; k<7; k++){
                    if(A[i][j][k] != A[l][j][k]){
                        comp++;
                    }
                }
            }
            if(comp < max){
                max = comp;
                F=i+1;
                S=l+1;
            }
        }
    }
    cout << F << " " << S;
}