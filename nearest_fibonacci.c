#include <stdio.h>
int main(){
    int a,x=0,y=1,n,max,min,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
        n=x+y;
        x=y;
        y=n;
        if(n<a){
            min=n;
        }
        else{
            max=n;
            break;
        }
    }
    if(max-a>a-min) printf("%d",min);
    else if(max-a==a-min) printf("%d %d",min,max);
    else printf("%d",max);
}