                   
                                     //PROJECT ON BANK MANAGEMENT SYSTEM.
#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Bank
{
    char name[100],add[100],y;
    int balance;
    public:
        void open_account();
        void deposite_money();
        void withdraw_money();
        void display_account();
    
};

void Bank :: open_account()
{   
    cout<<"------------------------------------------------------"<<endl;
    cout<<" Enter your Full Name : ";
    cin.ignore();
    cin.getline(name,100);
    cout<<" Enter your Address : ";
    cin.ignore();
    cin.getline(add,100);  
    cout<<" What Type of Account you want to open :\n Enter s -> for Savings.\n Enter c -> for Current. \n ";  
    cin>>y;  
    cout<<" Enter Amount for Deposite : ";
    cin>>balance;  
    cout<<"\n Your Account is Created Successfully !! \n\n";  
    cout<<"------------------------------------------------------"<<endl;
}  

void Bank :: deposite_money()
{
    int a;  
    cout<<"------------------------------------------------------"<<endl;
    cout<<" Enter how much you want to Deposite : ";
    cin>>a;
    balance += a;  
    cout<<"\n Total Amount is : "<<balance<<endl;  
    cout<<"------------------------------------------------------"<<endl;
}

void Bank :: display_account()
{   
    cout<<"------------------------------------------------------"<<endl;
    cout<<"\n Full Name : "<<name;
    cout<<"\n Address : "<<add;
    if(y == 'c' || y == 'C')
    {
        cout<<"\n Type of Account :  Current Account";
    }
    if(y == 's' || y == 'S')
    {
        cout<<"\n Type of Account :  Savings Account";
    }   
    cout<<"\n Total Diposite Amount : "<<balance<<endl; 
    cout<<"------------------------------------------------------"<<endl;   

}  
void Bank :: withdraw_money()
{   
    float amount;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"\n Enter Amount to Withdraw : ";
    cin>>amount;  
    balance -= amount;    
    cout<<"\n Total Amount left is : "<<balance<<endl;  
    cout<<"------------------------------------------------------"<<endl;
}

int main()
{
    int ch, x;    
    Bank obj;  
    do
    {
        cout<<"------------------------------------------------------"<<endl;
        cout<<" 1) Open Account: \n";  
        cout<<" 2) Deposite Money: \n";
        cout<<" 3) Withdraw Money: \n";
        cout<<" 4) Display Account: \n";  
        cout<<" 5) Exit: \n";  
        cout<<"\n Select the Option : ";
        cin>>ch;  
        cout<<"------------------------------------------------------"<<endl;

        switch(ch)
        {
            case 1 :
                cout<<" 1) Open Account: \n";  
                obj.open_account();
                break;  
            case 2 :
                cout<<" 2) Deposite Money: \n";  
                obj.deposite_money();
                break;
            case 3 :
                cout<<" 3) Withdraw Money: \n";  
                obj.withdraw_money();
                break;
            case 4 :
                cout<<" 4) Display Account: \n";      
                obj.display_account();
                break;
            case 5 :
                if(ch == 5)
                {
                    exit(1);
                }
            default: 
                cout<<"\n This is Invalid Option !!";     

        } 

        cout<<"\n Do you want to Select Next Option(Y/N) : "<<endl;  
        x = getch();  
        if(x == 'n' || x == 'N')
        {
            exit(0);
        }    

    }while(x == 'Y' || x == 'y');
    

    getch();
    return 0;
}
