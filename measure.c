#include<stdio.h>

int main(void){
    int n, k, i, sum = 0;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++){
        if(n%i == 0){
            sum++;
            if(sum == k) printf("%d",i);
        }
    }
    if(sum < k) printf("0");
}