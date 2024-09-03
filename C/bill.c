#include <stdio.h>
struct Student {
    int rate,qty,amt,dis,b_amt,gst,net_bill; 
};
int main() {
    struct Student s1[3];

    for(int i=0;i<3;i++) { 
        printf("Enter rate:");
        scanf("%d",&s1[i].rate); 
        printf("Enter qty:");
        scanf("%d",&s1[i].qty); 
        
        
            s1[i].amt=s1[i].rate*s1[i].qty;
            s1[i].dis=s1[i].amt*0.10;
            s1[i].b_amt=s1[i].amt-s1[i].dis;
            s1[i].gst=s1[i].b_amt*0.18;
            s1[i].net_bill=s1[i].b_amt+s1[i].gst; 
        
        printf("rate  qty  amt  dis  b_amt  gst  net_bill\n");
    printf("%d  %d  %d  %d  %d  %d  %d  \n",s1[i].rate,  s1[i].qty , s1[i].amt , s1[i].dis , s1[i].b_amt , s1[i].gst , s1[i].net_bill);
    }
    return 0;
}
