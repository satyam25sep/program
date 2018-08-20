#include<iostream>
#include<conio.h>
using namespace std;

class Account
{
  static int no_of_acc;
  char *customer_name,type;
  int account_no;
  float balance;

  public:
  Account()
  {
    no_of_acc++;
    account_no = no_of_acc;
    customer_name=new char[10];
    cout<<"Account created!!\n Account no.:"<<account_no;
    cout<<"\nEnter the Customer name :";
    cin>>customer_name;
    cout<<"\nEnter balance:";
    cin>>balance; 
  }
  
  void deposit(float a)
  {
    balance+=a;
    cout<<"\nAmount add!!!\nNew balance is : "<<balance;
  }

  void withdraw(float a)
  {
    if(a <= balance)
    {
    balance-=a;
    cout<<"\nAmount deducted!!!\nNew balance is :"<<balance;
    }
    else
    cout<<"\ninsufficient balance";
  }
  void display()
  {
    cout<<"\nCustomer name:"<<customer_name;
    cout<<"\nAccount no:"<<account_no;
    cout<<"\nCurrent balance:"<<balance;
  }
  ~Account()
  {
    delete customer_name;
    customer_name=NULL;
  }
};
int Account::no_of_acc=0;
int main()
{
  Account A[2];
  A[1].deposit(10000);
  A[1].withdraw(100);
  A[1].display();
  getch();

}