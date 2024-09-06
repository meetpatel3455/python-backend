#include<iostream>
using namespace std;
 
    int b_code;
    char bname[20];
    int innings, not_out, runs,batavg;
class base1
{
   

    public:
        void set1()
        {
            cout<<"b_code:\n";
            cin>>b_code;
            cout<<"bname:\n";
            cin>>bname;
            cout<<" innings \n:";
            cin>>innings;
            cout<<"not_out \n:";
             cin>>not_out;
            cout<<"runs\n:";
            cin>>runs;
            cout<<"batavg:\n";
            cin>>batavg;
            
        }

};
class base2{
    public:
     void set2(){
        batavg =runs/(innings-not_out);
    };


};
class derive:public base1,public base2{
    public:
      void display()
        {
            cout<<"b_code:\n"<<b_code<<endl;
            cout<<"bname:\n"<<bname<<endl;
            cout<<"innings:\n"<<innings<<endl;
            cout<<"not_out\n"<<not_out<<endl;
            cout<<"runs\n"<<runs<<endl;
            cout<<"batavg\n"<<batavg<<endl;
        }
};
int main(){
    class derive a;
    a.set1();
    a.set2();
    a.display();
    return 0;
}