#include<stdio.h>
int main(){
int inttype;
float floattype;
double doubletype;
char chartype;
printf("print size fo int = %zu bytes\n",sizeof(inttype));
printf("print size of float=%zu bytes\n",sizeof(floattype));
printf("print size of double=%zu bytes\n",sizeof(doubletype));
printf("print size of char=%zu bytes\n",sizeof(chartype));

return 0;
}
