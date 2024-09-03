#include<stdio.h>
int main()
{
    FILE *ptr;
    char string[50];

    ptr fopen("c.txt","a");
    getc(string);
    fopen(ptr,"%s",string);

//     ptr = fopen("c.txt","r");
//     while (fscanf(ptr,"%s",string)!=EDF) {
//         printf("%s",string);
//     }
//    fclose(ptr);
    
}