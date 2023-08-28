#include <stdio.h>
int main(){
    int n,b,d;
    scanf("%d %d %d",&n,&b,&d);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int waste=0,sum=0;
    for(int i = 0;i < n;i++){
        if(a[i]<=b){
            sum+=a[i];
        }
        if(sum>d){
            sum=0;
            waste++;
        }
    }
    printf("%d",waste);
}