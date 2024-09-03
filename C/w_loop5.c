#include<stdio.h>
int main()
{
    int i=1,n;
    printf("enter a value:");
    scanf("%d",&n);
    do{
        printf("%d",i);
        i+=2;
    }while (i<=n);
    return 0;
}