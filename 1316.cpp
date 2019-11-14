#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
   int n,cnt=0,ans=0,chk=0;
   scanf("%d",&n);
   
   for(int i=0;i<n;i++){
      char s[101]={};
      scanf("%s",s);
      
      int c[101]={s[0],};
      int ls = strlen(s);
      for(int j=1;j<ls;j++){
         if(s[j]!=s[j-1]) cnt++;
         c[cnt] = s[j];
      }
      
      sort(c,c+(cnt+1));
      
      for(int i=1;i<cnt+1;i++){
         if(c[i]==c[i-1]) chk++;
      }
      
      if(chk==0) ans++;
      cnt = 0;
      chk = 0;
   }
   printf("%d",ans);
}