#include<iostream>
using namespace std;
int main()
{
    int dec_num,rem;
    string hex_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout<<"Enter a Decimal number to convert to Hexadecimal number - ";
	 cin>>dec_num;
    cout<<endl;

    while(dec_num>0)
    {
        rem=dec_num%16;
        hex_num=hex[rem]+hex_num;
        dec_num=dec_num/16;
    }
        cout<<"The Hexadecimal number is - "<<hex_num<<endl;

    return 0;

}

