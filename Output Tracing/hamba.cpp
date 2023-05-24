#include<iostream>
using namespace std;
int main()
{
    char A[]="NICE DAY";
    int i=0;
    int j=0;
    int size = 8;
    while(i<8)
    {
        j=i;
        do
        {
            cout<<A[j];
            j=(j+4)%size;
        }
        while(j!=i);
        i++;
        cout<<endl;
    }
    return 0;
}
