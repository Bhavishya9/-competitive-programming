#include<stdio.h>

printPrimes(int N);

int main(void){
    int n;
    scanf("%d",&n);
    printPrimes(n);
    return 0;
}

printPrimes(int n){
    if(n>=2){
        printf("%d ",2);
    }
    for(int num=3;num<n;num++){
        int flag=0;
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                flag=1;
                break;
            }
        }
        if(!flag)
            printf("%d ", num);
    }
}
