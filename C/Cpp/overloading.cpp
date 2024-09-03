#include<iostream>
using namespace std;
class shape{
public:
    shape(int r) {
        int s;
        s=3.14*r*r;
        cout<<s<<endl;
    }
    shape(double s) {
        int sqr;
        sqr=s*s;
        cout<<sqr<<endl;
    } 
    shape(int l,int b){
        
        int rec;
        rec=l*b;
        cout<<rec<<endl;
    }
    shape(double l,double b){
        int tri;
        tri=(l*b)/2;
        cout<<tri<<endl;
    }
    };
int main() {
    shape s(3),sqr(20.0),rec(10,20),tri(10.0,20.0);
    return 0;
}