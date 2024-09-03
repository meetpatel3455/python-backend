#include<stdio.h>
int main()
{
    int a,b;
    int *c,*d;
    

    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter a value:");
    scanf("%d",&b);

    c=&a;
    d=&b;
    
    *c=*c+*d;
    *d=*c-*d;
    *c=*c-*d;
    printf("%d\n",a);
    printf("%d\n",b);

    return 0;
}