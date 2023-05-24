#include<iostream>
using namespace std;
class Person
{
protected:
    int Mobile;
    int NID;
    string Name;
    string Address;
    int Age;
    string Blood;
public:

   // string Address;
    //int Age;
   // string Blood;

    Person() {}

    Person(string N,string A,int Ag,int nid,int M,string Bg)
    {
        Name=N;
        Address=A;
        Age=Ag;
        Mobile=M;
        NID=nid;
        Blood=Bg;
    }

    ~Person() {}
    void setName(string N)
    {
        Name=N;
    }
    void setAddress(string A)
    {
        Address=A;
    }
    void setAge(int Ag)
    {
        Age=Ag;
    }
    void setNID(int nid)
    {
        NID=nid;
    }
    void setMobile(int M)
    {
        Mobile=M;
    }
    void setBlood(string Bg)
    {
        Blood=Bg;
    }
    string getName()
    {
        return Name;
    }
    string getAddress()
    {
        return Address;
    }
    int getAge()
    {
        return Age;
    }
    int getNID()
    {
        return NID;
    }
    int getMobile()
    {
        return Mobile;
    }
    string getBlood()
    {
        return Blood;
    }

    void Show()
    {
        cout<<"     Person Details."<<endl;
        cout<<"Name        \t: "<<Name<<endl;
        cout<<"Address     \t: "<<Address<<endl;
        cout<<"Age         \t: "<<Age<<endl;
        cout<<"NID         \t: "<<NID<<endl;
        cout<<"Mobile      \t: "<<Mobile<<endl;
        cout<<"Blood Group \t: "<<Blood<<endl;
        cout<<endl;
    }

};
class Student : public Person
{
private:
    double ID;
    float CGPA;
public:

    Student() {}

    Student(string N,string A,int Ag,int nid,int M,string Bg,float cg,double id):Person(N,A,Ag,nid,M,Bg)
    {
        CGPA=cg;
        ID=id;
    }

    ~Student() {}

    void Show()
    {
        cout<<"     Student Details."<<endl;
        cout<<"Name        \t: "<<Name<<endl;
        cout<<"Age         \t: "<<Age<<endl;
        cout<<"CGPA        \t: "<<CGPA<<endl;
        cout<<"NID         \t: "<<ID<<endl;
        cout<<"Address     \t: "<<Address<<endl;
        cout<<"Blood Group \t: "<<Blood<<endl;
        cout<<endl;
    }
};

class Worker : public Person
{
protected:
    int Salary;
public:

    Worker() {}

    Worker(string N,string A,int Ag,int nid,int M,string Bg,int sl):Person(N,A,Ag,nid,M,Bg)
    {
        Salary=sl;
    }
    ~Worker() {}
    void Show()
    {
        cout<<"     Worker Details."<<endl;
        cout<<"Name        \t: "<<Name<<endl;
        cout<<"Address     \t: "<<Address<<endl;
        cout<<"Age         \t: "<<Age<<endl;
        cout<<"NID         \t: "<<NID<<endl;
        cout<<"Salary      \t: "<<Salary<<endl;
        cout<<"Blood Group \t: "<<Blood<<endl;
        cout<<endl;
    }

};

int main()
{
    Person P1("Shahjahan","Comilla",45,56454,01712807468,"B+");
    P1.Show();
    Student S1("Shariar","Dhaka",18,564565,87858,"O+",3.25,88776);
    S1.Show();
    Worker W1("Khala","Mymensingh",35,7468726,847658,"O+",4000);
    W1.Show();

    return 0;
}


