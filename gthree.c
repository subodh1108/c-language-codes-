#include <stdio.h>
int main (){
    int a,b,c;
    printf("enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if (a >= b && a >= c){
        printf("greates number is a:%d",a);

    }
    else if (b >= a && b >= c)
    {
        printf("greatest number is b:%d",b);

    }
    else{


        printf("greatest number is c:%d",c);
    }
return 0;
    }


