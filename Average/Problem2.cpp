#include<iostream>
using namespace std;
int main()
{
    int N;
     cout<<"Total Student- ";
     cin>>N;
    int Marks[N]={},sum=0;
      for(int i=0; i<N; i++)

      {
        cout<<" Put mark for number "<< i+1 <<" - ";
        cin>> Marks[i];
        sum=sum+Marks[i];
      }

        cout<< "Total Marks - "<< sum <<endl;


       float Average =sum/(float)N ;

        cout<< "Average is - "<<Average<<endl;

       if(sum%2==0)
        {cout<<"The sum is even."<<endl;}
        else
        {cout<<"The sum is odd."<<endl;}



return 0;

}

