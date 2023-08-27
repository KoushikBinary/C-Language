#include <stdio.h>
int main(){
    long long int n[4],count=0,total=0;
    for(int i = 0;i < 4;i++){
        scanf("%lld",&n[i]);
    }
    for(int i = 0;i < 4;i++){
        count=0;
        for(int j = 0;j < 4;j++){
            if(n[i]==n[j]) count++;
        }
        if(count==1) total++;
    }
    if(total!=4) printf("%d",3-total);
    else printf("0");
}