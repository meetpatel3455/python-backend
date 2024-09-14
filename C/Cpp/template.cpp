#include<iostream>
using namespace std;

template <class T>
void display(T  t1)
{
    cout<<"displaying template" <<t1<<endl;
}
template <class x,class y>
void Display(x a,y b)
{
    cout<<"displaying template "<<a<<"\t"<<b<<endl;
}
    template<class t>
    t sum(t x,t y)
    {
        return x+y;
    }

int main(){
    display(200);
    display(12.56);
    display('6');

    Display('6',1.25);
    Display('x',25);
    Display(25,1.25);

    cout<<sum(1,2)<<endl;
    cout<<(25.4,1.5);
    return 0;
}