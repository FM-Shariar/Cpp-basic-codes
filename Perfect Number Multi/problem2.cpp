#include<iostream>
using namespace std;
int main()
{
    int n,rem=0,sum=0;
    cout<<"Enter a number - ";
    cin>>n;

    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=i-1; j++)
        {
            rem=i%j;

            if (rem==0)
            {
                sum=sum+j;
            }
        }


        if(sum==i)
        {
            cout<<i<<" is a perfect number."<<endl;
        }


        sum=0;
    }


    return 0;
}
