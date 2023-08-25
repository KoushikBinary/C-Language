#include <stdio.h>
#include <string.h>
int main(){
    int a,removes=0,i=0,j=1;
    scanf("%d",&a);
    char s[a];
    scanf("%s",s);
    if(strlen(s)<3){
        if(strlen(s)==2){
            if(s[0]!=s[1]) removes=0;
            else removes=1;
        }
        else{
            removes=0;
        }
    }
    else{
       while(j!=a){
        if(s[i]==s[j]) removes++;
        i++;
        j++;
       }
    }
    printf("%d",removes);
}