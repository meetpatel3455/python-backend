#include<stdio.h>
int main()
{
    for(int i=0;i<50;i++) {
        if(i==9) {
            goto next;
        }
        printf("%d\t",i);
    }
    next: for(int j=21;j<500;j++)  {
        printf("%d\t",j);
    }
    return 0;
}