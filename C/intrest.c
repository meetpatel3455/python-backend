#include<stdio.h>
void sum()
{
    
    int amount,rate,intrest;

    printf("enter a amount:\n");
    scanf("%d",&amount);
    printf("enter a rate:\n");
    scanf("%d",&rate);
   
   intrest=(amount*rate)/100;
   printf("interest is:%d",intrest);
}
int sum1()
{
    int amount,rate,intrest;

    printf("enter a amount:\n");
    scanf("%d",&amount);
    printf("enter a rate:\n");
    scanf("%d",&rate);
   
   intrest=(amount*rate)/100;
   return intrest;
}
int main(){
    sum();
    int intrest=sum1();
    printf("interest is:%d",intrest);

}