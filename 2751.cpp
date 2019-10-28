#include <stdio.h>
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int i,m;
	scanf("%d", &i);
	vector<int> v;
	
	for(int k=0; k<i; k++){
		scanf("%d", &m);
		v.push_back(m);
	}
	
	sort(v.begin(),v.end());
	
	for(int l=0; l<v.size();l++){
		if(l != v.size()-1){
		printf("%d\n", v[l]);}
		else{
			printf("%d", v[l]);
		}
	}
}
