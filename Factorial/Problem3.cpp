#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    cout<<"Enter a number to find its factorial - ";
    cin>>n;
    cout<<endl;

    for(int i=1;i<=n;i++)
    {
      f=f*i;
    }
    cout<<"The factorial of '"<<n<<"' is = "<<f<<endl;

    return 0;
}
