#include<iostream>
using namespace std;
int main()
{
    int n,multi=0;
    cout<<"Input a number to find it's Multiplication table- ";
     cin>>n;

    for(int i=1;i<=10;i++)
    {
        multi=n*i;
    cout<<n<<" * "<<i<<" = "<<multi<<endl;
    }


    return 0;

}
