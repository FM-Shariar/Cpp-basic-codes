#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    //string is a sequence of characters
    //c style character string
    char massage[6]={'h','e','l','l','o'};
    char ms[]={'w','e','\0'};
    char name[]="F.M SHARIAR ";
    char boyah[]="Hello";
    char hh[]="Welcome";
    cout<<massage<<endl;
    cout<<ms<<endl;
    cout<<name<<endl;
    //string Length
    cout<<strlen(massage)<<endl;
    //string copy from massage to ms(where u want to print the copy,where u want to copy from)
    cout<<strcpy(ms,massage)<<endl;
    //string concatenation
    cout<<strcat(name,boyah)<<endl;
    //string upper
    cout<<strupr(boyah)<<endl;
    //string Lower
    cout<<strlwr(name)<<endl;
    //string compare
    cout<<strcmp(hh,boyah)<<endl;
    cout<<strcmp(boyah,hh)<<endl;



return 0;
}
