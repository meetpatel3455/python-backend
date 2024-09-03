#include<iostream>
using namespace std;
class complex{
    int a;
    int b;

    public:
    void set_data(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"value of a is"<<a<<endl;
        cout<<"value of a is"<<b<<endl;

    }
    void operator-(){
        a=-a;
        b=-b;
    }
};
int main(){
    complex c;

    c.set_data(4,-5);
    c.display();

    -c;
    cout<<"after function call"<<endl;
    c.display();
    return 0;
}