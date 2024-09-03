#include<stdio.h>
int main()
{
    char i='A';
    do{
        printf("%c-%d",i,i);
        i++;
    }while (i<='Z');
    return 0;
}