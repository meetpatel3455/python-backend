#include<iostream>
using namespace std;
class shape{
public:
    shape(int a) {
        int cube;
        cube=6*a*a;
        cout<<cube<<endl;
    }
    shape(double r,double h) {
        int cylinder;
        cylinder=2*3.14*r*h+2*3.14*r*r;
        cout<<cylinder<<endl;
    } 
    shape(int w,int l,int h){
        int rectangle;
        rectangle=2*(w*l+h*l+h*w);
        cout<<rectangle<<endl;
    }
    shape(double r){
        int Sphere;
        Sphere=4*3.14*r*r;
        cout<<Sphere<<endl;
    }
};
int main() {
    shape cube(3),cylinder(20.0,30.0),rectangle(10,20,15),Sphere(10.0);
    return 0;
}

