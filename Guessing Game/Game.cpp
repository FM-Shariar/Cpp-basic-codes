#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int i,d,target,count;
    srand(time(0));
    target=rand()%10000;
    cout<<"Guess the number (1-10,000) - ";
    cin>>d;

    while(d!=target)
    {
        if(d>target)
        {
            cout<<"Opps! Try again with a lesser value - ";
            cin>>d;
            count=count+1;
        }
        if(d<target)
        {
            cout<<"Opps! Try again with a higher value - ";
            cin>>d;
            count=count+1;
        }

    }
    while(d==target)
    {
        cout<<"Congrats! You got it after "<<count+1<<" try."<<endl;
        break;
    }
    return 0;
}


