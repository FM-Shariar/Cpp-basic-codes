#include<iostream>
using namespace std;
class Employee
{
private:
    string Name;
    int Year,Salary;
    string Address;
public:
    Employee(string N,int Y,int S,string A)
    {
        Name=N;
        Year=Y;
        Salary=S;
        Address=A;
    }
   /* ~Employee()
    {

    }
    void setName(string N)
    {
        Name=N;
    }
    string getName()
    {
        return Name;
    }
    void setYear(int Y)
    {
        Year=Y;
    }
    int getYear()
    {
        return Year;
    }
    void setSalary(int S)
    {
        Salary=S;
    }
    int getSalary()
    {
        return Salary;
    }
    void setAddress(string A)
    {
        Address=A;
    }
    string getAddress()
    {
        return Address;
    }*/

    void showDetails()
    {
        cout<<Name;
        cout<<"\t"<<Year;
        cout<<"\t"<<Salary;
        cout<<"\t"<<Address<<endl;
    }

};
int main()
{
    cout<<"Name"<<"\t";
    cout<<"Year"<<"\t";
    cout<<"Salary"<<"\t";
    cout<<"Address"<<endl;

    Employee e1("Robert",1994,00,"64C-Wallstreat");
    e1.showDetails();
    Employee e2("Sam",2000,00,"68D-Wallstreat");
    e2.showDetails();
    Employee e3("John",1999,00,"26B-wallstreat");
    e3.showDetails();

    return 0;
}
