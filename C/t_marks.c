#include<stdio.h>
struct student {
    int r_no;
    char name[100];
    int sum;
    int r;
}
int main() {
    struct student 
    {
        for(int i=0;i<3;i++) {
            s1[i].sum=0;
            printf("Enter a name:");
            scanf("%s",&s1[i].name);
            printf("Enter r_no:");
            scanf("%s",&s1[i].r_no);
            printf("Enter marks for 3 sub:");

            for(int j=0;j<3;j++) {
                scanf("%d",&s1[i].marks[j]);
                s1[i].sum=s1[i].marks[j];
            }
            printf("Total marks:%d\n",s1[i].sum);
            s1[i].r=s1[i].sum/3;
            printf("percentage:%d\n",s1[i].r);
        }
        
    };

    
}