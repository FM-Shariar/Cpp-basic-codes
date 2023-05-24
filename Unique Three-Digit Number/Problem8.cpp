#include <iostream>
using namespace std;
int main()
{
    int count=0;
    cout<<"Create and display the unique three-digit number using 1,2,3,4 //"<<endl;
    cout<<endl;
	cout<<"The three digit numbers are :   ";

    for(int i=1;i<=4;i++)
    {

      for(int j=1;j<=4;j++)
      {

        for(int k=1;k<=4;k++)

        {
           if(k!=i && k!=j && j!=i)
           {
             cout<<i<<j<<k<<" ";
             count=count+1;
           }
        }

      }
    }
    cout<<endl<<endl;
    cout<<"Total amount of (three digit number) is : "<<count<<endl;

return 0;

}

