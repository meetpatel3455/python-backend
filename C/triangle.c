#include<stdio.h>
int tri() {
    int r,l,tri;

    printf("enter amt:");
    scanf("%d",&r);
    printf("enter amt:");
    scanf("%d",&l);

    tri=(r*l)/2;
    printf("triangle:%d",tri);

return tri;
}
int main() {
    tri();

}