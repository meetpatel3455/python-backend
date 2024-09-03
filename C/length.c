#include<stdio.h>
int main()
{
    char ch[100];
    int a=0;
    printf("enter char:");
    scanf("%s",ch);

    for(int i=0;ch[i]!='\0';i++) {

    
    a++;
    }
    printf("length of string:\n%d",a);
    return 0;

}