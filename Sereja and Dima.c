#include <stdio.h>
int main(){
    int a,i,j,p1=0,p2=0,c=0;
    scanf("%d",&a);
    int n[a];
    for(i = 0;i < a;i++){
        scanf("%d",&n[i]);
    }
    i=0,j=a-1;
    while(i<=j){
        if(c%2==0){
            if(n[i]>n[j]) p1+=n[i++];
            else p1+=n[j--];
        }
        else{
            if(n[i]>n[j]) p2+=n[i++];
            else p2+=n[j--];
        }
            c++;
    }
    printf("%d %d",p1,p2);
}