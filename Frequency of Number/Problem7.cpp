#include<iostream>
using namespace std;
int main()
{
    int num,rem;
     cout<<"Enter any number - ";
      cin>>num;
       cout<<endl;

    for(int i=0;i<10;i++)
    {
        cout<<"The frequency of '"<<i<<"' is - ";
         int count=0;
        for(int j=num;j>0;j=j/10)
        {
            rem=j%10;

              if(rem==i)
              {
                 count++;
              }
        }

        cout<<count<<endl;
    }

    return 0;
}

