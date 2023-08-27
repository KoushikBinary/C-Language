#include <stdio.h>
int main(){
    int a,b,max,n1,n2;
    scanf("%d %d",&a,&b);
    if(a>b) max=a;
    else max=b;
    n1=7-max;
    n2=6;
    if(n1%6==0 && n2%6==0){
        printf("%d/%d",n1/6,n2/6);
    }
   else if(n1%2==0 && n2%2==0){
    printf("%d/%d",n1/2,n2/2);
   }
   else if(n1%3==0 && n2%3==0){
    printf("%d/%d",n1/3,n2/3);
   }
   else if(n1==0) printf("0/1");
   else printf("%d/%d",n1,n2);
}