#include<iostream>
using namespace std;
int main()
{
    int decimal_number;
    cout<<"Input a decimal number: ";
     cin>>decimal_number;

    int binary_number=0,L1=1,rem;
    while(decimal_number>0)

    {
        rem=decimal_number % 2;
        decimal_number /= 2;
        binary_number = binary_number +(L1 * rem);
        L1*=10;

    }
    cout<<"The binary number is: " << binary_number <<endl;

    return 0;

}
