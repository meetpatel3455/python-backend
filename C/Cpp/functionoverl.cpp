#include<iostream>
using namespace std;
class shape{
public:
    void p(int a) {
        int cube;
        cube=6*a*a;
        cout<<cube<<endl;
    }
    void p(double r,double h) {
        int cylinder;
        cylinder=2*3.14*r*h+2*3.14*r*r;
        cout<<cylinder<<endl;
    } 
    void p(int w,int l,int h){
        int rectangle;
        rectangle=2*(w*l+h*l+h*w);
        cout<<rectangle<<endl;
    }
    void p(double r){
        int Sphere;
        Sphere=4*3.14*r*r;
        cout<<Sphere<<endl;
    }
};
int main() {
    shape a;
    a.p(3);
    a.p(20.0,30.0);
    a.p(10,20,15);
    a.p(10.0);
    
    return 0;
}

