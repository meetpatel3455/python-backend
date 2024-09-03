#include <stdio.h>
struct Student {
    int roll_no;
    char name[100];
    int marks[3];
    int sum;
    int r; 
};
int main() {
    struct Student s1[3];

    for(int i=0;i<3;i++) {
        s1[i].sum=0; 
        printf("Enter name:");
        scanf("%s", s1[i].name); 
        printf("Enter roll_no:");
        scanf("%d",&s1[i].roll_no); 
        printf("Enter marks for 3 subjects:");
        for(int j=0;j<3;j++) {
            scanf("%d",&s1[i].marks[j]); 
            s1[i].sum+=s1[i].marks[j]; 
        }
        printf("Total marks:%d\n",s1[i].sum);
        s1[i].r=s1[i].sum/3; 
        printf("Percentage:%d\n",s1[i].r);
    }
    return 0;
}
