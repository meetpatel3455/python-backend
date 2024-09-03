#include<stdio.h>
int main()
{
    char m[]={'H','E','L','L','O'};
    
    for(int i=0;i<=5;i++) {
        for(int j=0;j<i;j++) {
            printf("%c",m[j]);
        }
        printf("\n");
    }
    return 0;
}