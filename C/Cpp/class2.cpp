#include<iostream>
using namespace std;
class Student
{
    private:
    int b_code;
    char bname[20];
    int innings, not_out, runs,batavg;
    void calc_avg();
   
    public:
        void read_data()
        {
            cout<<"b_code:\n";
            cin>>b_code;
            cout<<" innings \n:";
            cin>>innings;
            cout<<"not_out \n:";
             cin>>not_out;
            cout<<"runs\n:";
            cin>>runs;
            cout<<"batavg:\n";
            cin>>batavg;
            calc_avg();
        }
       

        void display_data()
        {
            cout<<"b_code:\n"<<b_code<<endl;
            cout<<"bname:\n"<<bname<<endl;
            cout<<"innings:\n"<<innings<<endl;
            cout<<"not_out\n"<<not_out<<endl;
            cout<<"runs\n"<<runs<<endl;
            cout<<"batavg\n"<<batavg<<endl;
            
            
        }

};
   
    void  Student ::calc_avg(){
        batavg =runs/(innings-not_out);
    };

   int main()
   {
    Student s1;
    s1.read_data();
    s1.display_data();
   }