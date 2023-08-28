#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
   int n;
   scanf("%d",&n);
   while(n--){
    char s[100];
    scanf("%s",s);
    if(strlen(s)>10){
        printf("%c%d%c\n",s[0],strlen(s)-2,s[strlen(s)-1]);
    }
    else{
        printf("%s\n",s);
    }
   }
}