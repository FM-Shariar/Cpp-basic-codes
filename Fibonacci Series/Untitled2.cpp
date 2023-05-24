#include<iostream>
using namespace std;
int main()
{
    int n,sum=0,a=0,b=1;
    cout<<"Enter number how long do you want to go - ";
    cin>>n;
    cout<<"Fibonacci series - 0 1";
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    cout<<" "<<sum;

    }

    return 0;
}
