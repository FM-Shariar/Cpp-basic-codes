#include<iostream>
using namespace std;
int main()
{
    int n1,n2,GCD;
    cout<<"Enter the first number- ";
     cin>>n1;
    cout<<"Enter the second number- ";
     cin>>n2;

    for(int i = 1; i <= n1 && i <= n2; i++)

    {if(n1 % i == 0 && n2 % i== 0)
        GCD = i;}

    cout<<"The Greatest Common Divisor is- "<<GCD<<endl;

    return 0;

}
