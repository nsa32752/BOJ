#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++){
        if(i%2==0){
            for(int j=0; j<2*N; j++){
                if(j%2 == 0) cout << "*";
                else cout << " ";
            }
        }
        else if(i%2==1){
            for(int j=0; j<=2*N; j++){
                if(j%2 == 1) cout << "*";
                else cout << " ";
            }
        }
        cout << "\n"
    }

}