#include<stdio.h>
void perfect()
{
    int a,b,c,sum=0;

    printf("Enter a number:");
    scanf("%d",&b);

    for(a=1;a<=(b-1);a++) {
        c=b%a;
        if(c==0) {
            sum +=a;
        }

    }
    if(sum==b) {
        printf("this is perfect num");
    }else {
        printf("this is not perfect num");
    }
}
int main() {
perfect();
}
