#include<iostream>
using namespace std;

    class base1{
    public:
       int a;
       void setA(){
        cout<<"enter a";
        cin>>a;
        cout<<"enter sum ofa and b:"<<endl;

       }

};
    class derived:public base1{
    public:
       int b;
       void setB(){
        cout<<"enter b";
        cin>>b;
        cout<<"enter a sum * b:"<<a*b<<endl;

       }

};
class derived1:public base1{
    public:
       int c;
       void setC(){
        cout<<"enter c";
        cin>>c;
        cout<<"enter a sum * c:"<<a*c<<endl;

       }

};
int main(){
    derived obj;
        obj.setB();
        obj.setA();

    derived1 obj1;
        obj1.setA();
        obj1.setC();
return 0;
}
