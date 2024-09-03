#include<stdio.h>
void sq() {
    int r,sq;
    printf("enter amt:");
    scanf("%d",&r);

    sq=r*r;
    printf("area of sq:%d",sq);
}
int main() {
     sq();
}