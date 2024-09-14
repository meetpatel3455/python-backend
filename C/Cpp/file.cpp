#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char input[50];

    ofstream os;
    os.open("abc.txt");

    cout<<"please enter name:"<<endl;
    cin.getline(input,100);
    os<<input<<endl;

    cout<<"please enter contect number"<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<endl;

    os.close();

    ifstream is;
    string line;
    is.open("abc.txt");

    cout<<endl<<"reading from text file:"<<endl;
    
    while(getline(is,line))
    {
        cout<<line <<endl;
    }
    return 0;
}