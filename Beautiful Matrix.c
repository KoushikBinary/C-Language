#include <stdio.h>
#include <stdlib.h>
int main(){
    int n[5][5],r=-1,c=-1;
    for(int i = 0;i <5;i++){
        for(int j = 0;j < 5;j++){
            scanf("%d",&n[i][j]);
            if(n[i][j]==1){
                r=i;
                c=j;
            }
        }
    }
    printf("%d",abs(2-r)+abs(2-c));
}