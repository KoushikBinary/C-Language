#include <stdio.h>
int main(){
    int size,i,j,count=0;
    scanf("%d",&size);
    int host[size],guest[size];
    for(i = 0;i < size;i++){
        scanf("%d %d",&host[i],&guest[i]);
    }
    i=0,j=0;
    while(i!=size){
        if(j==size){
            i++;
            j=0;
        }
        if(host[i]==guest[j]) count++;
        j++;
    }
    printf("%d",count);
}