#include<iostream>
using namespace std;
int main()
{
    int n,right_digit,s=0;

       cout<<"Enter your number to find the sum of the digits- ";
        cin>>n;
       while(n>0)

       {
           right_digit = n%10;
           s = s + right_digit;
           n = n/10;
       }

       cout<<"Sum of the digits- "<<s;


     return 0;

}
