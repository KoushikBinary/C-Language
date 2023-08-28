#include <stdio.h>
#include <stdlib.h>
int main(){
   char s[1000];
   gets(s);
   int n[26]={0};
   int i = 1,c=0;
  while(s[i]!='}'){
    if(s[i]>='a' && s[i]<='z'){
        n[s[i]%97]++;
        if(n[s[i]%97]==1){  
            c++;
        }
    }
    i++;
  }
   printf("%d",c);
}