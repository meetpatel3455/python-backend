#include<iostream>
using namespace std;
class complex {
    int a;
    int b;

public:
complex(){
    a=0;
    b=0;
}
complex(int x,int y){
    a=x;
    b=y;
}
void display(){
    cout<<"value of a"<<a<<endl;
    cout<<"value of b"<<b<<endl;
}
complex operator-(complex t)
{
complex r;

r.a=a-t.a;
r.b=b-t.b;
return r;
}
};
int main(){
    class complex x,y,z;

    x=complex(2,6);
    cout<<"object x is:"<<endl;
    x.display();
    y=complex(3,4);
    cout<<"object y is:"<<endl;
    y.display();

    z=x-y;
    cout<<"object z is:"<<endl;
    z.display();
    return 0;
}