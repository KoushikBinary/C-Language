#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main(){
   char s[100];
   int static_pointer=97,c=0,n;
   scanf("%s",s);
   for(int i = 0 ;i < strlen(s);i++){
    n=abs(static_pointer-s[i]);
    if(n>26-n){
        c+=26-n;
    }
    else{
        c+=n;
    }
    static_pointer=s[i];
}
printf("%d",c);
}
