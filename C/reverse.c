// #include <stdio.h>
// #include <string.h>
// int main() {
//     char s[100], r[100];
//     int i, j;
//     printf("Enter a string: ");
//     scanf("%s", s);
//     int len = strlen(s);
//     for (i = len - 1, j = 0; i >= 0; i--, j++) {
//         r[j] = s[i];
//     }
//     r[j] = '\0'; 
//     printf("Reversed string: %s\n", r);
//     return 0;
// }

#include <stdio.h>    
#include <string.h>   
int main()   
{   
    char str[50], t;   
    int i, a,b,len;   
    printf (" Enter a name: ");   
    scanf( "%s", &str);   
    len = strlen(str);   
    a = 0;  
    b = len - 1;  
    for (i = a; i <b; i++)   
    {   
        t = str[i];   
        str[i] = str[b];   
        str[b] = t;   
        b--;   
    }   
    printf (" The reverse of the original string is: %s ",  str);   
    return 0;    
}