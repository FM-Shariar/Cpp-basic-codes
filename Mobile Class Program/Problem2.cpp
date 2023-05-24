#include<iostream>
using namespace std;
class Mobile
{

private:
    string OwnerName;
    long SimNumber;
    float MobileBalance;
    string MobileOs;
    bool LockStatus;

public:
    Mobile()
    {

    }

    Mobile(string ON, long SN, float MB, string OS, bool L)
    {
        OwnerName=ON;
        SimNumber=SN;
        MobileBalance=MB;
        MobileOs=OS;
        LockStatus=L;
    }

    ~Mobile() {}

    void setLockStatus(bool L)
    {
        LockStatus=L;
    }

    bool getLockStatus()
    {
        return LockStatus;
    }

    void setBalance(float B)
    {
        MobileBalance=B;
    }
    float getBalance()
    {
        return MobileBalance;
    }

    void Showinfo()
    {
        if(getLockStatus()!=true)
        {
            cout<<"Your mobile is unlock."<<endl;
            cout<<"Mobile Owner Name - "<<OwnerName<<endl;
            cout<<"SIM Number - " <<SimNumber <<endl;
            cout<<"Mobile Balance - "<<MobileBalance<<"TK"<<endl;
            cout<<"Mobile OS Name - "<<MobileOs<<endl;
            cout<<"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"<<endl;

        }

        else cout<<"Your mobile is lock."<<endl;

    }

    void Recharge(float Amount)
    {

        if(getLockStatus()!=true)
        {
            cout<<"After Recharge."<<endl;

            MobileBalance+=Amount;
        }
        else
            cout<<"Your mobile is lock."<<endl;
    }

    void CallSomeone(float Time)
    {
        if(getLockStatus()!=true)
        {
            cout<<"After Talking."<<endl;

            float Cost=Time*0.5;

            MobileBalance-=Cost;
        }
        else cout<<"Your mobile is lock."<<endl;
    }

};

int main()
{

    Mobile M("Shariar",01712407465,26,"Android",false);
    M.Showinfo();

    M.Recharge(500);
    M.Showinfo();

    M.CallSomeone(56);
    M.Showinfo();


    return 0;
}

