#include<stdio.h>
int main(){
    int a[4][4],i,j;
    for(i = 0; i < 4; i++)
    for(j = 0; j < 4; j++){
        printf("enter value of 2D arr[%d][%d]",i,j);
        scanf("%d",&a[4][4]);

    }
    printf("\n 2D array elements ");
    
    for(i = 0; i < 4; i++){
        printf("\n");
        for(j = 0; j < 4; j++)
        printf("%d",a[4][4]);
        
    }
}