#include<iostream>
using namespace std;

int sum=0;
void additionV(int a,int b)//call by value.
{
    sum=a+b;
    cout<<sum<<endl;
}
void additionP(int *a,int *b)//call by reference
{
    sum=*a+*b;
    cout<<sum<<endl;
}
int main()
{
    //pointer saves the variables addresses
    //both array and integer pointer are shown below
    int x=5,y[4]= {1,2,3,4},u=4;
    int *m=&x;
    int *p=&y[2];
    int *z=&y[0];
    cout<<m<<endl;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<z<<endl;
    additionP(&x,&u);
    additionV(x,u);
    return 0;
}
