#include<iostream>
using namespace std;

class Student{
    public:
    int admno;
    char sname[20];
    float english,maths,science;
    float total;
    void ctotal()
    {
        total=english+maths+science;
        cout << total;
    }

    
    void Takedata()
        {
            cout<<"admno:\n";
            cin>>admno;
            cout<<" sname \n:";
            cin>>sname;
            cout<<"eng \n:";
             cin>>english;
            cout<<"science\n:";
            cin>>science;
            cout<<"maths:\n";
            cin>>maths;
            ctotal();
        }
};
class Student2 : public Student{
    public:

         void Showdata()
        {
            Takedata();
            cout<<"adm no:\n"<<admno;
            cout<<"sname:\n"<<sname;
            cout<<"eng\n"<<english;
            cout<<"science\n"<<science;
            cout<<"maths\n"<<maths;
            cout<<"total\n"<<total;
        }
       
        
    
};
int main(){
    Student2 Student1; 
    Student1.Showdata();
}