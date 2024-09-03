#include<iostream>
using namespace std;
class T1 {

int anno;
char name[100];
float mark[5],avg,sum;
void getarg();

public:

T1(){
     cout << "name:";
       gets(name);
    cout << "addmission number:";
       cin >> anno;
       for(int i=1; i<=5;i++){
        cout << "enter "<<i<<"sub mark";
        cin>>mark[i];
        sum +=mark[i];
       }
       
}
void SCHEDULE(){
    cout << "name: " << name << endl;
        cout << "addmission number: " << anno << endl;
        for(int i=1; i<=5;i++){
        cout << "mark of "<<i<<"sub mark"<< mark[i]<<endl;
       }
       cout <<"total:"<<sum<<endl;
       getarg();
        cout << "avg: " << avg << endl;
}

};

void T1 :: getarg() {
    avg= sum /5;
};
int main() {
    T1 m;
    m.SCHEDULE();
    return 0;
}