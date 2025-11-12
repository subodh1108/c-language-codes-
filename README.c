#include<stdio.h>
int main(){
int i;
  int n;
 long long fact=1;
  printf("enter an integer:");
  scanf("%d",&n);
  if(n<0){
    printf("negative number");
  }
  else{
    for(i=0; i=<n; i++)J{
      fact *=i;
  }
      printf("factorial of %d=%llu",n,fact);
      }

return 0;



}
