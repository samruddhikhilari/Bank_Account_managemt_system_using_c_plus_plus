// C++ Bank Account program.
#include<iostream>
using namespace std;
class Account 
{
    public:
    int acc_no;
    char name[10];
    char acc_type[10];
    float balance;
    public:
  void get_Account_data() 
    {
        cout<<"\n \n Enter the account no:";
        cin>>acc_no;
        cout<<"\n Enter the name of depositor:";
        cin>>name;
        cout<<"\n Enter the type of account:";
        cin>>acc_type;
        cout<<"\n Enter the balance of account:";
        cin>>balance;

    }
};
class Bank_operations:public Account
{
    public:
  void deposite()
    {
        int amount;
      cout<<"\n Enter the amount to deposit into the account:";
        cin>>amount;
        balance= balance+amount;
        cout<<"\n amount deposited sucessfully:"<<balance;
    }
  void withdraw()
  {
    int amount;
    cout<<"\n Enter the amount to withdraw form the account:";
    cin>>amount;
    balance= balance- amount;
    cout<<"\n Amount withdraw sucessfully:"<<balance;
}
  void display_account_data()
    {
      cout<<"\n ******************* Bank Account details.***********************";
      cout<<"\n =================================================================";
      cout<<"\n Name of Depositor :"<<name;
      cout<<"\n Number of the  bank account: "<<acc_no;
      cout<<"\n Account type:"<<acc_type;
      cout<<"\n Balance :"<<balance;
    }
    
};
int main()
{
    Bank_operations b1[10]; 
        for( int i=0;i<10;i++)
            {
                b1[i].get_Account_data();
                b1[i].deposite();
                b1[i].withdraw();
            }
            
         for( int i=0;i<10;i++)
            {
                     b1[i].display_account_data();
            }
        
    return 0;
}