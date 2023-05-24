#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Input how many numbers do you want to reverse = ";

    cin>>n;
    cout<<endl;
    int arr[n];

    cout<<"Put your numbers = ";
    for ( int i =0; i<n; i++)
    {
        cin>> arr[i];
    }
    cout<<"Your main numbers are = ";
    for ( int i= 0; i< n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Numbers in reverse order = ";

    for( int i=n-1; i>=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;

}
