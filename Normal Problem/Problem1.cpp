#include<iostream>
using namespace std;
int main ()
{

    float a,b,c,d,e;

    cout<<"Include total kilometers driven per day- "<<"( km )";
       cin>>a;

    cout<<"Input cost per liter of petrol- "<<"( BDT/L )";
       cin>>b;

    cout<<"Input average kilometer per liter- "<<"( km/L )";
       cin>>c;

    cout<<"Input perking fees per day- "<<"( BDT )";
       cin>>d;

    cout<<"Input tolls per day- "<<"( BDT )";
       cin>>e;

    float total;
        total=(a/c*b+d+e) ;

    cout<<"Your cost per day, when driving to work is- "<<total<<" BDT "<<endl;

 return 0;

}

