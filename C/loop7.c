#include<stdio.h>
int main()
{
    char k='A';
    for(char i='A';i<='E';i++) {
        for(char j='A';j<=i;j++) {
            if(i%2!=0) {
                printf("%c",k+32);
            }else {
                printf("%c",k);

            }
        k++;

        }
        printf("\n");
    }return 0;
}