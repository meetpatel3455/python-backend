#include<stdio.h>
int factorial(int n) {
    if(n==0||n==1) {
        return 1;
    }else {
        return n*factorial(n-1);
    }
}
int main()
{
    int n;
    printf("Enter a value:");
    scanf("%d",&n);
    int total;
    total=factorial(n);
    printf("factorial is:%d",total);
}
