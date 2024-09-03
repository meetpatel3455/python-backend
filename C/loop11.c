#include<stdio.h>
int main()
{
    int k=1;
    for(int  i=1;i<=5;i++) {
        for(int  j=1;j<=i;j++) {
            if(k%2==0) {
                printf("0");
            }else {
                printf("1");
            }
            k++;
    }
    printf("\n");
}
return 0;
}