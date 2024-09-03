#include<stdio.h>
void sum(int amt,int rate) {
    int intrest,s;

    intrest=(amt*rate)/100;
    printf("intrest is\n%d",intrest);
}
    int s(int amt,int rate) {
        int total;
        total=amt+rate;
        return total;

        }    
        

int main()
{
    sum(10000,10);
    int total;
    total=s(10,50);

    printf("%d\n",total);
    return 0;
}