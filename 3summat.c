#include<stdio.h>
int main(){
    int a[3][3],i,j,sum;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++){
        printf("enter the value of arr[%d][%d]",i,j);
        scanf("%d",&a[3][3]);
        
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[3][3]);

    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    sum=sum+a[3][3];
    printf("\nsum of 2D array is=%d",sum);

    return 0;


} 