#include<iostream>
using namespace std;

class Student
{
private:
    string Name;
    string Roll;
    int Phone;
    string Address;

public:
    Student(string N,string R,int P,string A)
    {
        Name=N;
        Roll=R;
        Phone=P;
        Address=A;
    }
    void showDetails()
    {
        cout<<endl;
        cout<<"Student Details : "<<endl;
        cout<<"Name = "<<Name<<endl;
        cout<<"Roll = "<<Roll<<endl;
        cout<<"Phone Number = "<<Phone<<endl;
        cout<<"Address = "<<Address<<endl;
        cout<<"####################"<<endl;
    }
};

int main()
{

    string Name,Roll,Address;
    int Phone;
    cout<<"Input 1st student details : "<<endl;
    cout<<"Name: ";
    cin>> Name;
    cout<<"Roll: ";
    cin>>Roll;
    cout<<"Address: ";
    cin>>Address;
    cout<<"Phone: " ;
    cin>>Phone;
    Student s1(Name,Roll,Phone,Address);
    s1.showDetails();
    cout<<endl;

    cout<<"Input 2nd Student details : " <<endl;
    cout<<"Name: ";
    cin>>Name;
    cout<<"Roll: ";
    cin>>Roll;
    cout<<"Address: ";
    cin>>Address;
    cout<<"Phone: " ;
    cin>>Phone;

    Student s2(Name,Roll,Phone,Address);
    s2.showDetails();


    return 0;
}

