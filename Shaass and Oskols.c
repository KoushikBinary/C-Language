#include <stdio.h>
int main(){
    int n,m;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    while(m--){
        int x,y,l,r;
        scanf("%d %d",&x,&y);
        l=y;
        r=a[x-1]-y;
        if(x-2>=0){
            a[x-2]+=l-1;
        }
        if(x+1<=n){
            a[x]+=r;
        }
        a[x-1]=0;
    }
    for(int i = 0;i < n;i++){
        printf("%d\n",a[i]);
    }
}