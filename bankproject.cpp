                       //BANK MANAGEMENT PROJECT

#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

class bank
{
	char name[100],add[100],y;
	int balance,amount;
	public:
		void open_account();
		void deposite_money();
		void withdraw_cash();
		void display_account();
	};

void bank :: open_account()
{
	cout<<"Enter your full name :: ";
	cin.ignore();
	cin.getline(name,100);
	cout<<"Enter youe address :: ";
	cin.ignore();
	cin.getline(add,100);
	cout<<"What type of account you want to open saving (s) or current (c)?\n";
	cin>>y;
	cout<<"Enter amount for deposite ::";
	cin>>balance;
	cout<<"Your account is created!\n";
}
	void bank:: deposite_money()
	{	
		int a;
		cout<<"Enter how much you deposite :: \t";
		cin>>a;
		balance+=a;
		cout<<"Total Amount you deposited  is :: \t"<<balance;
		}
void bank::display_account()
{
	cout<<"Your full name :: \t"<<name;
	cout<<"Your address :: \t"<<add;
	cout<<"Type of account that you open :: \t"<<y;
	cout<<"Amount you deposite is :: \t"<<balance;
	}
	
		void bank :: withdraw_cash()
		{	float withdraw;
			cout<<"\n Withdraw :: ";
			cout<<"\nEnter amount to withdraw :: ";
			cin>> amount;
			balance-=amount;
			cout<<"\nNow total amount is left :: "<<balance;
			}	
	
int main()
{	
	int ch,x;
	bank obj;
	do
	{
	cout<<"1) Open Account \n";
	cout<<"2) Deposite Money \n";
	cout<<"3) Withdraw Cash \n";
	cout<<"4) Display account \n";
	cout<<"5) Exit\n";
	cout<<"Select the option from above \n";
	cin>> ch;
	switch(ch)
	{
		
		case 1 :cout<<"1) open account \n";
		obj.open_account();
		break;
		case 2:cout<<"2) deposite money \n";
		obj.deposite_money();
		break;
		case 3:cout<<"3) withdraw cash \n";
		obj.withdraw_cash();
		break;
		case 4:cout<<"4) display account \n";
		obj.display_account();
		break;
		case 5:
			if (ch = 5)
			{ 
				exit(1);
			}
			
	default:
			cout<<"This do not exist try again \n";		
			}
	cout<<"Do you want to select next optin then press :: Y \n";
cout<<"If you want to exit then press :: N \n";
x=getch();
if(x=='n'||x=='N')
exit(0);
} while(x=='y'||x=='Y');


	getch();
	return 0;

}
	

