#include <stdio.h>
int main(){
    int shovel,count=0,shovels,rupee;
    scanf("%d %d",&shovel,&rupee);
    shovels=shovel;
    while(shovels%10!=0 && shovels%10!=rupee){
        shovels+=shovel;
        count++;
    }
    count++;
    printf("%d",count);
}