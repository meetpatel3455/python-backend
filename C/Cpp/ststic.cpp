#include<iostream>
using namespace std;
class base{
    public:
    static int number;
    static int i;
    base() {
        number++;
        i++;
    }
    static void display(){
        cout<<"ans is "<<number<<endl;
    }
    static void Display(){
        cout<<"ans is "<<i<<endl;
    }
    
};
int base::number=10;
int base::i=0;



int main(){
    base a;
    a.display();
    base b;
    b.display();
    base c;
    c.display();
    base d;
    d.display();
    return 0;

}