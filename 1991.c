#include <stdio.h>
#include <vector>

using namespace std;

vector<pair<int,int>> tree(50);

void preorder(int node){
	printf("%c", node+'A');
	if(tree[node].first >=0) preorder(tree[node].first);
	if(tree[node].second >=0) preorder(tree[node].second);
}

void inorder(int node){
	if(tree[node].first >=0) inorder(tree[node].first);
	printf("%c", node+'A');
	if(tree[node].second >=0) inorder(tree[node].second);
}

void postorder(int node){
	if(tree[node].first >=0) postorder(tree[node].first);	
	if(tree[node].second >=0) postorder(tree[node].second);
	printf("%c", node+'A');
}


int main(){
	int N;
	scanf("%d", &N);
	for(int i=0;i<N;i++){
		char inf[100] = {};
		scanf(" %[^\n]s", inf);
		char parent = inf[0];
		char left = inf[2];
		char right = inf[4];
		tree[parent-'A'].first = left-'A';
		tree[parent-'A'].second = right-'A';
	}
	preorder(0);
	printf("\n");
	inorder(0);
	printf("\n");
	postorder(0);

}