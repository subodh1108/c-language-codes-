#include<stdio.h>
int main()
{
    int n,i,j ,temp;
    int a[10];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter inteagers\n:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&n);
    }
    for(i=1; i<n; i++)
    {
        temp=a[i];
        j=i=1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j=i=1;

        }
        printf("sorted array is \n");
        for(i=0; i<n;i++)
        {
            printf("%d\n",a[i]);
        }

    }

}