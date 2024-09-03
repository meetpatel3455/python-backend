#include<stdio.h> 
 
int main() 
{ 
    int a,b,x,sum=0,n2; 
    char s[5]; 
    printf("enter the x value\n"); 
    scanf("%d",&x); 
    int i=1; 
printf("enter a value:\n "); 
scanf("%d",&a); 
printf("enter b value:\n"); 
scanf("%d",&b); 
 
     
     
printf("enter sign:\n"); 
scanf("%s",&s[0]); 
 
 
 
switch (s[0]) 
{ 
case '+': 
sum = a+b; 
    printf("%d + %d = %d\n",a,b,sum); 
    break; 
    case '-': 
    sum = a-b; 
    printf("%d - %d = %d\n",a,b,sum); 
    break; 
     case '*': 
     sum = a*b; 
    printf("%d * %d = %d\n",a,b,sum); 
    break; 
     case '/': 
     sum = a/b; 
    printf("%d / %d = %d\n",a,b,sum); 
    break; 
 
default: 
printf("number not found\n"); 
    break; 
     
} 
 
while (i <=x) 
    { 
   printf("enter the n value\n"); 
scanf("%d",&n2);  
printf("enter sign:\n"); 
scanf("%s",&s[0]); 
 
 
 
switch (s[0]) 
{ 
case '+': 
 
    printf("%d + %d = %d\n",sum,n2,sum+n2); 
    break; 
    case '-': 
     
    printf("%d - %d = %d\n",sum,n2,sum-n2); 
    break; 
     case '*': 
      
    printf("%d * %d = %d\n",sum,n2,sum*n2); 
    break; 
     case '/': 
     
    printf("%d / %d = %d\n",sum,n2,sum/n2); 
    break; 
 
default: 
printf("number not found\n"); 
    break; 
     
} 
    i++; 
} 
return 0; 
}