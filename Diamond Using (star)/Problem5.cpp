#include<iostream>
using namespace std;
int main()
{
   int i,j,row;
   cout<<"Input number of rows - ";
    cin>>row;

   for(i=0;i<=row;i++)
   {
     for(j=1;j<=row-i;j++)
      cout<<" ";
       for(j=1;j<=2*i-1;j++)
        cout<<"*";
          cout<<endl;
   }

   for(i=row-1;i>=1;i--)
   {
     for(j=1;j<=row-i;j++)
      cout<<" ";
       for(j=1;j<=2*i-1;j++)
        cout<<"*";
         cout<<endl;
   }

   return 0;

}
