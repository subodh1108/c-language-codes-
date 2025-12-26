#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter positive number:");
    scanf("%d",&n);
    for(i = 1; i <= n; ++i){
        sum=sum + 1;
        printf("sum=%d\n",sum);

    }

return 0;
}