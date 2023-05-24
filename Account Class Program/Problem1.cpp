#include<iostream>
using namespace std;
class Account
{
private:
    string AccountName;
    int AccountNo;
    float Balance;
    string AccountType;

public:

    Account(string Ac,int An,float B,string At)
    {
        AccountName=Ac;
        AccountNo=An;
        Balance=B;
        AccountType=At;
    }

   /* void setAccountName(string Ac)
    {
        AccountName=Ac;
    }
    string getAccountName()
    {
        return AccountName;
    }
    void setAccountNo(int An)
    {
        AccountNo=An;
    }
    int getAccountNo()
    {
        return AccountNo;
    }
    void setBalance(float B)
    {
        Balance=B;
    }
    float getBalance()
    {
        return Balance;
    }
    void setAccountType(string At)
    {
        AccountType=At;
    }
    string getAccountType()
    {
        return AccountType;
    }*/
    ~Account(){}

    void Deposite(int amount)
    {
        if (amount>=0)
        {
            Balance=Balance+amount;

        }
    }
    void Withdraw(int amount)
    {
        if (amount<=Balance&& Balance>=0)
        {
            Balance=Balance-amount;

        }
        else {
            cout<<"Balance withdraw unsuccessful."<<endl;
        }
    }
    void Transfer(float amount,Account *receiver)
    {
        if (amount<=Balance){
        Withdraw(amount);
        receiver->Deposite(amount);

    }}
    void showAccountDetails(){
        cout<<"Account Name: "<<AccountName<<endl;
        cout<<"Account Number: "<<AccountNo<<endl;
        cout<<"Account Balance: "<<Balance<<endl;
        cout<<"Account Type: "<<AccountType<<endl;
        cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;
    }

};

int main()
{
    Account a1("Karim",22465321,1000,"Student");
    a1.showAccountDetails();
    a1.Deposite(500);
    cout<<"After Deposit."<<endl;
    a1.showAccountDetails();
    a1.Withdraw(300);
    cout<<"After Withdraw."<<endl;
    a1.showAccountDetails();
    cout<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<endl;


    Account a2("Rahim",22465311,29000,"Work");
    a2.showAccountDetails();
    a2.Deposite(400);
    cout<<"After Deposit."<<endl;
    a2.showAccountDetails();
    a2.Withdraw(200);
    cout<<"After Withdraw."<<endl;
    a2.showAccountDetails();
    cout<<"OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO"<<endl;

    a1.Transfer(500,&a2);
    cout<<"After Transfer."<<endl;
    a1.showAccountDetails();
    cout<<"After Transfer."<<endl;
    a2.showAccountDetails();
    cout<<endl;


 return 0;
}
