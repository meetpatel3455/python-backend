#include <iostream>
#include<string>
using namespace std;

class store
{
public:
    int p[100], j, d = 0, o[10], z = 0, n, tot = 0,x[10],f=0,t=0,total;
    int choice,qun;
    double gst,n_bill;
    string i[100], c,m;


    store()
    {
        cout << endl << "================= Hotel Menu =================" << endl << endl;

        cout << "    ==>> List Of Items <<==" << endl << endl;
        i[0] = "panir tika  ";
        i[1] = "pav bhaji   ";
        i[2] = "manchuriyn  ";
        i[3] = "vada pav    ";
        i[4] = "papad       ";
        i[5] = "dabeli      ";
        i[6] = "samosa      ";
        i[7] = "masala dhosa";
        i[8] = "roti        ";



        p[0] = 350;
        p[1] = 200;
        p[2] = 120;
        p[3] = 160;
        p[4] = 130;
        p[5] = 160;
        p[6] = 140;
        p[7] = 500;
        p[8] = 20 ;
    

        cout<<"-------------------------------"<< endl;

        cout<< "No.     "<<"   Item        "<<" Price"<< endl;
        cout<<"-------------------------------"<< endl;

        for (j = 0; j <=8; j++)
        {
            cout << j + 1 << "       ";
            cout << i[j] << "     ";
            cout << p[j] << endl;
        }
        cout<<"-------------------------------"<< endl<<endl;
    }

    void data()
    {
        cout << "\n\n================ Customer Details ================" << endl << endl;
        cout << "Enter Customer Name          :" ;
        cin >> c;

        again :

        cout << "Enter Customer Mobile Number(10 digit only) :" ;
        cin>>m;

        d=0;
        d=m.size();
        
        if (d == 10)
        {
            cout<<endl;
        }else
            {
                cout << "Invalid Number" << endl;
                goto again;
            }

    }

    void order()
    {
        
    start:
    

        cout << "Enter 0 for bill (OR)\n ";

        cout << "Enter your choice : " ;
        cin >> choice;
        if (choice == 0)
        {
            goto end;
        }else
            {
                 o[z] = choice;
                 cout<<"Enter quantity :";
                 cin>>qun;

                 x[z]=qun;
                 z++;

                cout<<endl;
                goto start;
             }
    end:
        cout << " ";
    }

    void bill()
    {
        z--;

        cout<<"\n\n";
        cout<<"\t==================================================="<<endl << endl;

        cout << "\t" << "\t   BILL ( Hotel Menu )"<<endl << endl;
        cout<<"\t==================================================="<<endl;

        cout <<endl<< "\tCustomer Name          : " << c ;
        cout <<endl<< "\tCustomer Mobile Number : " << m << endl << endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        cout<<"\t"<<"No.\t"<<"Items"<<"\t"<<"price"<<"\t"<<"Quantity"<<"\t"<<"  Total"<<endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        for (j = 0; j <= z; j++)
        {
            n = o[j];
            cout<<o[j];

            f = x[j];
            n--;

            total = p[n]*f;

            cout<<"\t"<<j+1<<"\t";

            cout << i[n] << "\t" << p[n] << "\t" << f << "\t\t" << total <<endl;

            t = f*p[n];

            tot = tot + t;
        }
        cout<<"\t---------------------------------------------------"<<endl;
        

        gst= tot * 0.18;

        n_bill=tot+gst;

        cout << endl<<endl;
        cout<<"\t" << "Total bill  : \t\t\t\t    " << tot << endl;
        cout<<"\t" << "GST         : \t\t\t\t    " << gst << endl;
        cout<<"\t---------------------------------------------------"<<endl;
        cout<<"\t" << "Net bill    : \t\t\t\t    " << n_bill << endl;
    }

    void a()
    {
        cout<<endl<<endl;
        cout<<"\t\t"<<"--------- Have A Nice Day -----------" <<"\n\n";
        cout<<"\t\t"<<"--------- Don't Waste Food ----------" <<"\n\n";
        cout<<"\t==================================================="<<endl;
    }
};

int main()
{
    store s1;

    s1.data();
    s1.order();
    s1.bill();
    s1.a();
    return 0;
}