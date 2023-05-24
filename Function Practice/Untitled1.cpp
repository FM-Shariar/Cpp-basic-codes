#include<iostream>
using namespace std;
//type function-name (
int addition(int a,int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    //Local veriables
    int a,b;
    cout<<"Enter your numbers : ";
    cin>>a;
    cin>>b;
    cout<<"sum "<<addition (a,b);

    return 0;


}








