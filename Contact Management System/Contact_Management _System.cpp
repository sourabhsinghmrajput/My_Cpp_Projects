#include<iostream>  
#include<conio.h>  
#include<fstream>                      
using namespace std;


string fname, lname, phone_no;    



void addContact();
void searchContact();
void help();
void self_exit();        
bool check_digits(string);        
bool check_numbers(string);    



int main()
{	

	short int choice;

	system("cls");
	system("color 0B");
	cout<<"\n\n\n\t\t\tContact Management System."<<endl;   
	cout<<" 1. Add Contact : "<<endl;  
	cout<<" 2. Search Contact : "<<endl; 
	cout<<" 3. Help : "<<endl;   
	cout<<" 4. Exit : "<<endl;   
	cin>>choice;

	switch(choice)
	{
		case 1:
			addContact();
			break;  
		case 2:
			searchContact();
			break;
		case 3:
			help();
			break;  
		case 4:
			self_exit();
			break;  
		default:
			cout<<" Invalid Input !!"<<endl;
			cout<<" Press Any Key To Continue.."<<endl;  
			getch();  
			main();

	}     


	return 0;
}  


void self_exit()
{
	system("cls");
	cout<<"\n Thank You For Using !!"<<endl;
	exit(1);
}  

void help()
{
	cout<<"\tThis Displays Help."<<endl;
}

void addContact()
{
	ofstream phone("number.txt, ios::app");    
	system("cls");
	cout<<" Enter First Name : ";
	cin>>fname;
	cout<<" Enter Last Name : ";
	cin>>lname;
	cout<<" Enter 10-Digit Phone Number : ";    
	cin>>phone_no;

	if(check_digits(phone_no) == true)
	{
		if(check_numbers(phone_no) == true)
		{
			if (phone.is_open())
			{
				phone << fname <<" "<<lname<<" "<<phone_no<<endl;
				cout<<" Contact Saved Successfully !! "<<endl;    

			}else
			{
				cout<<" Error in Opening of file !"<<endl;
			}
		}else
		{
			cout<<" A Phone Number must contain 'Numbers' Only !!"<<endl;    
			
		}

	}else
	{
		cout<<" A Phone Number must contain 10-Digits !!"<<endl;
	}
	phone.close();    

}    

void searchContact()
{

}  

    
bool check_digits(string x)
{
	if (x.length() == 10)
	{
		return true;
	}else
	{
		return false;
	}
}    

bool check_numbers(string x)
{
	bool check = true;

	for (int i = 0; i < x.length(); ++i)
	{
		if(! (int(x[i]) >= 48 && int(x[i]) <= 57))
		{
			check = false;
			break;
		}
	}  

	if (check == true)
	{
		return true;
	}
	if (check == false)
	{
		return false;             
	}
}
