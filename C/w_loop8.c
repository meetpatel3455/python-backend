#include<stdio.h>
int main()
{
    char i='A';
    do{
        printf("%c-%c\n",i,i+32);
        i++;
    }while (i<='Z');
    return 0;
}