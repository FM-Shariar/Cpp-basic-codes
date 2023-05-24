#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Give two integers number- "<<endl;
    cout<<"First number= ";
       cin>>num1;
    cout<<"Second number= ";
       cin>>num2;
    (num1%num2==0)? cout<<"The first is a multiple of the second"<<endl:cout<<"The fist is not a multiple of the second.";
    return 0;

}
