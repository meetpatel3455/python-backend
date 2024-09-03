#include <stdio.h>    
#include <string.h>   
int main()   
{   
    char str[50],str1[50];   
    printf (" Enter a name: ");   
    scanf( "%s", &str); 
    printf (" Enter a name: ");   
    scanf( "%s", &str1);

    printf("both is:%s %s",str,str1);
    return 0;
}