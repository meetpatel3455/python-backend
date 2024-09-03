#include<stdio.h>
int main()
{
    int a=10;
    int *b=&a;

printf("%p\n",&b);
printf("%p\n",b);
printf("%d\n",a);
printf("%d\n",*b);
return 0;
}