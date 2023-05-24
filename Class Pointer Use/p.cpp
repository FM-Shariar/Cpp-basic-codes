#include<iostream>
using namespace std;
class Marvel
{
public:
    Marvel()
    {
        cout<<"MARVEL UNIVERSE"<<endl;
    }
    virtual void protecting_the_livings()
    {
        cout<<"Protecting The Livings Marvel Universe"<<endl;
    }
    void visualize_the_living()
    {
        cout<<"Visualize The Livings Marvel Universe"<<endl;
    }
};
class Dc
{
public:
    Dc()
    {
        cout<<"DC UNIVERSE"<<endl;
    }
     void protecting_the_livings()
    {
        cout<<"Protecting The Livings Dc Universe"<<endl;
    }
     virtual void visualize_the_living()
    {
        cout<<"Visualize The Livings Dc Universe"<<endl;
    }
};
class Earth : public Marvel,public Dc
{
public:
    Earth()
    {
        cout<<"EARTH PLANET"<<endl;
    }
    void protecting_the_livings()
    {
        cout<<"Protecting The Livings EARTH PLANET"<<endl;
    }
    void visualize_the_living()
    {
        cout<<"Visualize The Livings EARTH PLANET"<<endl;
    }
};
class Wakanda : public Earth
{
public:
    Wakanda()
    {
        cout<<"WAKANDA COUNTRY"<<endl;
    }
};
class Asgard : public Marvel
{
public:
    Asgard()
    {
        cout<<"ASGARD KINGDOM"<<endl;
    }
    void protecting_the_livings()
    {
        cout<<"Protecting The Livings ASGARD KINGDOM"<<endl;
    }
    void visualize_the_living()
    {
        cout<<"Visualize The Livings ASGARD KINGDOM"<<endl;
    }
};
class Alfeim : public Marvel
{
public:
    Alfeim()
    {
        cout<<"ALFEIM KINGDOM"<<endl;
    }
    void protecting_the_livings()
    {
        cout<<"Protecting The Livings ALFEIM KINGDOM"<<endl;
    }
    void visualize_the_living()
    {
        cout<<"Visualize The Livings ALFEIM KINGDOM"<<endl;
    }
};
class Nidavellir : public Marvel
{
public:
    Nidavellir()
    {
        cout<<"NIDAVELLIR KINGDOM"<<endl;
    }
    void protecting_the_livings()
    {
        cout<<"Protecting The Livings NIDAVELLIR KINGDOM"<<endl;
    }
    void visualize_the_living()
    {
        cout<<"Visualize The Livings NIDAVELLIR KINGDOM"<<endl;
    }
};
class Vanaheim : public Dc
{
public:
    Vanaheim()
    {
        cout<<"VANAHEIM KINGDOM"<<endl;
    }
    void protecting_the_livings()
    {
        cout<<"Protecting The Livings VANAHEIM KINGDOM"<<endl;
    }
    void visualize_the_living()
    {
        cout<<"Visualize The Livings VANAHEIM KINGDOM"<<endl;
    }
};
class People : public Earth
{
public:
    People()
    {
        cout<<"PEOPLE MEMBER"<<endl;
    }
};
class Trive : public Wakanda
{
public :
    Trive()
    {
        cout<<"TRIVE MEMBER"<<endl;
    }
};
int main()
{
    Wakanda wk;
    cout<<endl;

    People P;
    cout<<endl;

    Trive T;
    cout<<endl;

    Marvel *mr;
    Dc *d;
    Asgard as;
    Vanaheim va;

    d = &va;
    d ->protecting_the_livings();
    d ->visualize_the_living();
}
