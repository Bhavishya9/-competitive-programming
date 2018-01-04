#include<stdio.h>

int main(void){
    int l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    if(k>r)
        printf("%d",0);
    int count=0;
    for(int i=l;i<=r;i++)
        if(i%k==0)
            count++;
    printf("%d",count);
}