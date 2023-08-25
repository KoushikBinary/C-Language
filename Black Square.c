#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
    long long int a1,a2,a3,a4,c=0;
    scanf("%lld %lld %lld %lld",&a1,&a2,&a3,&a4);
    long long int a=pow(10,5);
    char s[a];
    scanf("%s",s);
    for(int i= 0;i < strlen(s);i++){
        if(s[i]==49) c+=a1;
        else if(s[i]==50) c+=a2;
        else if(s[i]==51) c+=a3;
        else if(s[i]==52) c+=a4;
    }
    printf("%lld",c);
}