#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"How many numbers do you want to try - ";
   cin>>n;
   int number[n];

   for(int i=0; i<n; i++)

   {
    cout<<"Your number - ";
    cin>>number[i];
   }

   for(int i=0; i<n; i++)
   {
    if (number[i]%2==0)
    (cout<<number[i]<<" is even "<<endl);
    else
    (cout<<number[i]<<" is odd "<<endl);
    }

return 0;

}
