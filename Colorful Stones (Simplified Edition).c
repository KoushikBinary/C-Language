#include <stdio.h>
#include <string.h>
int main(){
 char string1[100],string2[100];
 scanf("%s",string1);
 scanf("%s",string2);
 int i = 0,j=0;
 while(j!=strlen(string2)){
    if(string1[i]==string2[j]){
        i++;
    }
    j++;
 }   
 printf("%d",i+1);
}