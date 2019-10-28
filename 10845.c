#include <stdio.h>
#include <queue>

using namespace std;

int main(){
   int n;
   queue<int> q;
   scanf("%d",&n);
   while(n--){
      char order[8]={};
      scanf("%s",order);
      if(order[0]=='p' && order[1]=='u'){
         int x;
         scanf("%d",&x);
         q.push(x);
      }
      if(order[0]=='p' && order[1]=='o'){
         if(q.empty()) printf("-1\n");
         else{
            printf("%d\n",q.front());
            q.pop();
         } 
      }
      if(order[0]=='s') printf("%d\n",q.size());
      if(order[0]=='e') printf("%d\n",q.empty());
      if(order[0]=='f'){
         if(q.empty()) printf("-1\n");
         else printf("%d\n",q.front());
      }
      if(order[0]=='b'){
         if(q.empty()) printf("-1\n");
         else printf("%d\n",q.back());
      }
   }
}