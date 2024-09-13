#include <iostream>
#include<string>
using namespace std;

class store
{
public:
    int p[100], j, d = 0, o[10], z = 0, n, tot = 0,x[10],f=0,t=0,total;
    int choice,qun;
    double gst,n_bill;
    string i[100],name,m_no;


    store()
    {
        cout << endl << "================= Hotel Menu =================" << endl << endl;

        cout << "    ==>> List Of Items <<==" << endl << endl;
          i[0] = "Manchurian     ";
          i[1] = "Veg-65         ";
          i[2] = "Garlic-ball    ";
          i[3] = "Chaines-Bhel   ";
          i[4] = "Panir-Tika     ";
          i[5] = "Dosa           ";
          i[6] = "Maisur         ";
          i[7] = "Gotalo         ";
          i[8] = "Mendu-Vada     ";
          i[9] =  "Idli          ";
          i[10]=  "7-chesee      ";
          i[11] = "Mix-Veg       ";
          i[12] = "Margrita      ";
          i[13] = "Paneer Tanduri";
          i[14] = "Onion Pizza   ";
          i[15] = "Kaju Carry    ";
          i[16] = "Paneer Masala ";
          i[17] = "Paneer Tanduri";
          i[18] = "Veg Paneer    ";
          i[19] = "Aloo Gobhi    ";
          i[20] = "Mazza         ";
          i[21] = "Cock          ";
          i[22] = "Sprit         ";
          i[23] = "Butter-Milk   ";
          i[24] = "Thumsup       ";
          i[25] = "Sosyo         ";

          p[0] = 150; 
          p[1] = 120; 
          p[2] = 150; 
          p[3] = 160; 
          p[4] = 140; 
          p[5] = 50; 
          p[6] = 150; 
          p[7] = 250; 
          p[8] = 100; 
          p[9] = 100; 
          p[10] = 200; 
          p[11] = 250; 
          p[12] = 240; 
          p[13] = 250; 
          p[14] = 230; 
          p[15] = 180; 
          p[16] = 200; 
          p[17] = 200; 
          p[18] = 220; 
          p[19] = 200; 
          p[20] = 25; 
          p[21] = 25; 
          p[22] = 25; 
          p[23] = 25; 
          p[24] = 25; 
          p[25] = 25; 
    

        cout<<"-------------------------------"<< endl;

        cout<< "No.     "<<"   Item        "<<" Price"<< endl;
        cout<<"-------------------------------"<< endl;

        for (j = 0; j <=25; j++)
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
        cin >> name;

        again :

        cout << "Enter Customer Mobile Number(10 digit only) :" ;
        cin>>m_no;

        d=0;
        d=m_no.size();
        
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

        cout << "\t" << "\t      BILL ( Hotel Menu )"<<endl << endl;
        cout<<"\t==================================================="<<endl;

        cout <<endl<< "\tCustomer Name          : " << name ;
        cout <<endl<< "\tCustomer Mobile Number : " << m_no << endl << endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        cout<<"\t"<<"No.\t"<<"Items"<<"\t"<<"       price"<<"   "<<"Quantity"<<"    "<<"Total"<<endl;

        cout<<"\t---------------------------------------------------"<<endl;
        
        for (j = 0; j <= z; j++)
        {
            n = o[j];
    

            f = x[j];
            n--;

            total = p[n]*f;

            cout<<"\t"<<j+1<<"\t";

            cout << i[n] << "\t" << p[n] << "\t" << f << "\t    " << total <<endl;

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