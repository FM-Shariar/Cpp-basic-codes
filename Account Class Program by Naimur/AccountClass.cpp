#include<iostream>
using namespace std;

class Account{

private:
    string Account_Name;
    string Account_No;
    float Balance;
    string Account_Type;

public:

    //empty constructor;
    Account(){
        Account_Name = "No Name";
        Account_No = "0000";
        Balance = 00;
        Account_Type = "No Type";
    }

    //parameterized constructor;
    Account(string n, string no, float b, string t){
        Account_Name = n;
        Account_No = no;
        Balance = b;
        Account_Type = t;
    }

    //setter and getter method;
    void setAccount_Name(string n){
        Account_Name = n;
    }
    string getAccount_Name(){
        return Account_Name;
    }

    void setAccount_No(string no){
        Account_No = no;
    }
    string getAccount_No(){
        return Account_No;
    }

    void setBalance(float b){
        Balance = b;
    }
    float getBalance(){
        return Balance;
    }

    void setAccount_Type(string t){
        Account_Type = t;
    }
    string getAccount_Type(){
        return Account_Type;
    }

    //this is destructor;
    ~Account(){

    }

    //bool flag = true;
    //deposit money;
    void Deposit(float money,bool flag){
        //for deposit flag is true;
        if(flag){
            cout << "Previous balance = " << Balance << "TK" << endl;
            Balance+=money;
            cout << "You have successfully Deposit " << money << "TK" << endl;
            cout << "Current balance = " << Balance << "TK" << endl << endl;

        }
        else {
            //for transfer flag is false;
            Balance+=money;
        }
    }

    //withdraw money;
    void Withdraw(float money,bool flag){
        //for withdraw flag is true;
        if(flag){
            if(Balance>=money){
                cout << "Previous balance = " << Balance << " TK" << endl;
                Balance-=money;
                cout << "You have successfully withdraw " << money << " TK" << endl;
                cout << "Current balance = " << Balance << " TK" << endl<<endl;
            }
            else{
                cout << "You don't have enough money " <<endl;
                cout << "You have " << Balance << " TK" <<endl<<endl;
            }
        }
        else{
           //for transfer flag is false;
           cout << "Previous Balance " << Balance << " TK" <<endl;
            Balance-=money;
            cout << money << " TK Transfer Successful " << endl;
            cout << "Current Balance " << Balance << " TK" <<endl << endl;
        }
    }

    void Transfer(Account *receiver, float money,bool flag){
        //flag = false;
        Withdraw(money,flag);
        receiver->Deposit(money,flag);
    }

    void Show_Account_Details(){
        cout << "Account Name = " << Account_Name << endl;
        cout << "Account No = " << Account_No << endl;
        cout << "Balance = " << Balance << endl;
        cout << "Account Type = " << Account_Type << endl;
        cout << endl;

    }


};

void showoption(){
        cout <<"1. Create an Account ." <<endl;
        cout <<"2. Show Balance ." <<endl;
        cout <<"3. Deposit Balance ." <<endl;
        cout <<"4. Withdraw Balance ." <<endl;
        cout <<"5. Transfer Balance ." <<endl;
        cout <<"6. Show Account Details . " <<endl;
        cout <<"7. Exit . " <<endl;
        cout << endl;
}

bool Exit(){
    string e;
    while(true){
    cout <<"Enter E to Close or C to Continue : ";
    cin >> e;
    if(e =="E" || e =="e"){
            cout << endl;
            cout << "Thank You :) " << endl;
        return false;
    }
    else if(e == "c" || e == "C" ){
        return true;
    }
    else {
        cout << "Invalid input : " <<endl;
        cout << "Try Again " << endl<<endl;
    }

}
}

bool exit_section(){
    char e ;
    while(true){
    cout <<"Press e to exit, press c to continue for this section : ";
    cin >> e;
    if(e =='E' || e =='e'){
            cout << endl;
        return false;
    }
    else if(e == 'c' || e == 'C' ){
        return true;
    }
    else {
        cout << "Invalid input : " <<endl;
        //cout << "Try Again " << endl<<endl;
    }


}
}

bool exit_creation(){
    string d;
    while(true){
        cout << "If yes press y , if no press n :";
            cin >> d;
    if(d =="y" || d =="Y"){
            cout << endl;
        return true;
    }
    else if(d == "n" || d == "N" ){
        return false;
    }
    else {
        cout << "Invalid input " <<endl<<endl;
        //cout << "Try Again " << endl<<endl;
    }


}
}

int main(){


    Account a[20];

    int i=0;
    //char e;

    while(true){

        showoption();
        string n;
        cout <<"Choose Option (1-7) : ";
        cin >> n;
        if(n == "1"){
        while(true){

            cout <<"Give info for Account creation : " <<endl<<endl;
            string name,acno,actype;
            float balance;
            cout << "Enter Account Name : ";
            cin >> name;
            cout <<"Enter Account Number : ";
            cin >> acno;
            cout <<"Enter Balance to 1st Deposit : ";
            cin >> balance;
            cout << "Enter Account Type : ";
            cin >> actype;
            cout << endl;

            a[i].setAccount_Name(name);
            a[i].setAccount_No(acno);
            a[i].setBalance(balance);
            a[i].setAccount_Type(actype);
            a[i].Show_Account_Details();
            i++;

            cout << "Do you want to create another account? " <<endl;
            if(exit_creation()) continue;
            else break;

        }
    }


        else if(n == "2"){
            while(true){
            if(i!=0){
                cout << "You Have " <<i<<" Account "<< endl;
                for(int j=1; j<=i; j++){
                    cout <<j<<". "<< a[j-1].getAccount_Name() << endl<<endl;
                }
                    cout << "Choose the account for balance info (1- "<<i <<"): ";
                    int ba;
                    cin>>ba;
                    cout << a[ba-1].getAccount_Name()<< "---";
                    cout<<a[ba-1].getBalance() <<"TK" <<endl<<endl;
            }

            else{
                cout << "You don't have any account. Please create account first "<<endl<<endl;
            }
            //cout << "Press n if you want to exit from this section or c to continue:";
            //char d;
            //cin >> d;

            if(exit_section()) continue;
            else {
                cout << endl;
                break;
            }
        }
        }


        else if(n == "3"){
            if(i!=0){
                cout << "You Have " <<i<<" Account "<< endl;
                for(int j=1; j<=i; j++){
                    cout <<j<<". "<< a[j-1].getAccount_Name() << endl;
                }
                    cout << "Choose the account for balance Deposit : " ;
                    int dp;
                    cin >> dp;

                    cout << "You Have Choose Account " << a[dp-1].getAccount_Name()<<endl;
                    cout << "How much money do u want to deposit? - ";
                    float money;
                    cin >> money;
                    a[dp-1].Deposit(money, true);
            }

            else{
                cout << "You don't have any account. Please create account first "<<endl<<endl;
            }
        }

        else if(n == "4"){
                while(true){
            if(i!=0){
                cout << "You Have " <<i<<" Account "<< endl;
                for(int j=1; j<=i; j++){
                    cout <<j<<". "<< a[j-1].getAccount_Name() << endl;
                }
                    cout << "Choose the account for balance Withdraw : " ;
                    int dp;
                    cin >> dp;
                    cout <<endl;
                    cout << "You Have Choose Account " << a[dp-1].getAccount_Name()<<endl<<endl;
                    cout << "How much money do u want to Withdraw? - ";
                    float money;
                    cin >> money;
                    cout <<endl;
                    a[dp-1].Withdraw(money, true);
            }

            else{
                cout << "You don't have any account. Please create account first "<<endl<<endl;
            }

            if(exit_section()) continue;
            else {
                cout << endl; break;
            }
        }
        }

        else if(n == "5"){
             if(i>=1){
                cout << "You Have " <<i<<" Account "<< endl;
                for(int j=1; j<=i; j++){
                    cout <<j<<". "<< a[j-1].getAccount_Name() << endl;
                }
                    cout << "From which account do you want to send money? : " ;
                    int s;
                    cin >> s;
                    cout << "In which account do you want to receive money? :";
                    int r;
                    cin >> r;

                    cout << "You Have Choose Account " << a[s-1].getAccount_Name()<<" as sender"<<endl;
                    cout << "You Have Choose Account " << a[r-1].getAccount_Name()<<" as receiver"<<endl;
                    cout << endl;

                    cout << "How much money do u want to Transfer? - ";
                    float money;
                    cin >> money;
                    a[s-1].Transfer(&a[r-1],money,false);
            }

            else{
                cout << "You don't have "<<i <<" account to transfer. Please create account first "<<endl<<endl;
            }
        }

        else if(n == "6"){
            if(i!=0){
                cout << "You Have " <<i<<" Account "<< endl;
                for(int j=1; j<=i; j++){
                    cout <<j<<". "<< a[j-1].getAccount_Name() << endl;
                }
                cout << "Show Details for which account? - ";
                int ac;
                cin >> ac;
                a[ac-1].Show_Account_Details();
        }

        else{
                cout << "You don't have any account. Please create account first "<<endl<<endl;
            }
    }
    else if( n == "7") {
        cout <<"Thank You :) "<<endl;
        break;
    }
    else{
        cout << "Invalid Option" <<endl;
        cout <<"Choose from 1-7" <<endl;
        cout << endl;
    }

    if(Exit()) continue;
    else break;

}

    return 0;
}
