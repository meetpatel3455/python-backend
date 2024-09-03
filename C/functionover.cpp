#include<iostream>
using namespace std;
class shape{
public:
    void s(int r) {
        int sr;
        sr=3.14*r*r;
        cout<<sr<<endl;
    }
    void s(double sq) {
        int sqr;
        sqr=sq*sq;
        cout<<sqr<<endl;
    } 
    void s(int l,int b){
        int rec;
        rec=l*b;
        cout<<rec<<endl;
    }
    void s(double l,double b){
        int tri;
        tri=(l*b)/2;
        cout<<tri<<endl;
    }
};
int main() {
    shape a;
    a.s(10);
    a.s(10.0);
    a.s(20,30);
    a.s(20.0,10.0);
    return 0;
}