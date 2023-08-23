#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,i,j,ind;
    scanf("%d",&a);
    int n[a];
    for(i = 0;i < a;i++){
        scanf("%d",&n[i]);
    }
    for(i = 1;i < a;i++){
        ind=n[i];
        j=i-1;
        while(j>=0 && ind<n[j]){
            n[j+1]=n[j];
            j--;
        }
        n[j+1]=ind;
    }
    for(i = 0;i < a;i++){
        printf("%d ",n[i]);
    }

}