#include<iostream>
using namespace std;
fun()
{
    static int a;
    int b=0;
    a++,b++;
    cout<<a;
    cout<<b<<endl;
}
int main()
{
   fun();
   fun();
}
