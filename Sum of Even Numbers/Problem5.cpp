#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter First Number- ";
     cin>>num1;
    cout<<"Enter Second Number- ";
     cin>>num2;

    int sum = 0;

    for (int i=num1+1; i<num2; i++)

      {if(i%2==0)
        sum=sum+i;}

    cout<<"Sum of the Even numbers between "<< num1 <<" & "<< num2 <<" is = "<<sum;
    return 0;

}
