#include<iostream>
using namespace std;
int main()
{
    int year[8]={2002,2012,2040,2031,1936,1971,1996,1981};

     for (int i=0;i<8;i++)
     {

        if(year[i]%400==0 || (year[i]%4==0 && year[i]%100!=0))
         {cout<<year[i]<<" is a leap year "<<endl;}

        else
         {cout<<year[i]<<" is not a leap year "<<endl;}


     }

      return 0;
}
