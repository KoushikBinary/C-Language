#include <stdio.h>
int main(){
    int a,rem,sum,p;
    scanf("%d",&a);
    sum=0;
    p=1;
    while(a>0){
        rem=a%10;
        a=a/10;
        sum=sum+rem;
        p=p*rem;
    }
    if(sum==p) printf("Spy Number");
    else printf("Not Spy Number");
}