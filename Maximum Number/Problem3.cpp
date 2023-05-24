#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int number1, number2;
    int max_number;
    cout<<"Enter two integers number- ";
    cin>>number1>>number2;

    (number1%2== 0) ? (cout<<number1<<"is a even number"<<endl) : (cout<<number1<<"is a odd number"<<endl);
    (number2%2== 0) ? (cout<<number2<<"is a even number"<<endl) : (cout<<number2<<"is a odd number"<<endl);
    max_number=(number1>=number2)? max_number = number1: max_number = number2;
    cout<<max_number<<"is Maximum"<<endl;

    return 0;


}

