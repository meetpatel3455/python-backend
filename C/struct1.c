#include<stdio.h>
struct Student
{
    int roll_no;
    char name[50];
};
int main()
{
    struct Student s1,s2,s3[3];
    {
        gets(s1.name);
        s1.roll_no=1;
        printf("roll_no:%d\n",s1.roll_no);
        printf("name:%s\n",s1.name);

        gets(s2.name);
        s2.roll_no=2;

        printf("roll_no:%d\n",s2.roll_no);
        printf("name:%s\n",s2.name);
        for(int i=1;i<3;i++) {
            gets(s3[i].name);
        }

    }
    return 0;
}