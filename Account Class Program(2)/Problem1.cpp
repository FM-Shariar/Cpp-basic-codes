#include<iostream>
using namespace std;
class Account
{
protected:
    string accHolderName;
    int accNo;
    double balance;
    float interestRate;
public:
    Account() {};
    Account(string N,int aN,double b,float iR)
    {
        accHolderName=N;
        accNo=aN;
        balance=b;
        interestRate=iR;
    }

    ~Account() {};
    void setaccHolderName(string N)
    {
        accHolderName=N;
    }
    string getaccHolderName()
    {
        return accHolderName;
    }
    void setbalance(int b)
    {
        balance=b;
    }
    int getbalance()
    {
        return balance;
    }
    void showDetails()
    {

        cout<<"Account Holder Name : "<<accHolderName<<endl;
        cout<<"Account Number : "<<accNo<<endl;
        cout<<"Account Balance : "<<balance<<endl;
        cout<<"Account Interest Rate : "<<interestRate<<endl;
        cout<<endl;


    }};
    class Savings : public Account
    {
   public:
    Savings(){};
    Savings (string N,int aN,double b,float iR):Account(N,aN,b,iR)
    {

    }
    ~Savings(){};
    void showSavingsDetails()
    {
        cout<<"Account Holder Name : "<<accHolderName<<endl;
        cout<<"Account Number : "<<accNo<<endl;
        cout<<"Account Balance : "<<balance<<endl;
        cout<<"Account Interest Rate : "<<interestRate<<endl;
        cout<<"Balance With Interest Rate : "<<balance*(interestRate/100)<<endl;
        cout<<endl;
    }
    void deposit(int amount)
    {
        balance=balance+amount;
        cout<<"After deposit : "<<balance<<endl;
    }
    void withdraw(int amount)
    {
        balance=balance+amount;
        cout<<"After withdraw : "<<balance<<endl;
    }

    };

class DPS:public Account
{
protected:
    int tenureYear;
    int installmentAmount;

public:
    DPS(){};
    DPS(string N,int aN,double b,float iR,int tY,int inA):Account(N,aN,b,iR)
    {
        tenureYear=tY;
        installmentAmount=inA;
    }

    ~DPS(){};
    void showDPSDetails()
    {
        cout<<"DPS Account Holder Name : "<<accHolderName<<endl;
        cout<<"DPS Account Number : "<<accNo<<endl;
        cout<<"DPS Account Balance : "<<balance<<endl;
        cout<<"DPS Account Interest Rate : "<<interestRate<<endl;
        cout<<"Number of Tenure Years : "<<tenureYear<<endl;
        cout<<"Amount of Installment Amount : "<<installmentAmount<<endl;
        cout<<endl;
    }
    void autoInstallmentFrom(Savings *S1,int amount)
    {

    }

};

int main()
{
   Account A1("Shariar",345,25000,7.5);
   cout<<"Savings Account."<<endl;
   A1.showDetails();
   DPS D1("Shariar",345,25000,7.5,3,5000);
   cout<<"DPS Account."<<endl;
   D1.showDPSDetails();
   Savings S1("Shariar",345,25000,7.5);
   cout<<"Savings Account."<<endl;
   S1.showSavingsDetails();



    return 0;
}
