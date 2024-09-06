#include<iostream>
using namespace std;

class Num{
    protected:
    int a;
    public:
    void setA(){
        cout<<"enter set a:";
        cin>>a;
    }
};

class Num1{
    protected:
    int b;
    public:
    
    void setB(){
        cout<<"enter set :";
        cin>>b;
    }
};
class derive:public Num,public Num1{
    
        public:
        void product(){
            cout<<"get a and b:"<<a*b<<endl;
        }
    
};
int main()
{
    class derive c;
    c.setA();
    c.setB();
    c.product();
    return 0;
}