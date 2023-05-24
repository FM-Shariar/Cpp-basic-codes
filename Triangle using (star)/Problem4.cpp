#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number of rows - ";
     cin>>num;
    cout<<endl;

    for (int i=1;i<=num;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

        cout<<endl;
    }

 return 0;
}

