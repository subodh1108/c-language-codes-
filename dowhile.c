#include<stdio.h>
int main(){
    int i=1,n;
    printf("enter n values:");
    scanf("%d",&n);
   do{
        printf("%d\t",i);
        i++;
    }while(i<=n);
    return 0;
}