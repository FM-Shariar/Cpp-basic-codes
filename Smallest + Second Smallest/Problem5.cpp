#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number of elements - ";
   cin>>n;
   int element[n],min_a,min_b;
   for (int i=0;i<n;i++){
    cin>>element[i];
   }

    if (element[0] < element[1]){
        min_a = element[0];
        min_b = element[1];
    }

    else {
        min_b = element[0];
        min_a = element[1];
     }
     for ( int i = 2; i<n; i++){
        if (element[i] <  min_a){
             min_b =  min_a;
             min_a= element[i];
        }
        else if (element[i] <  min_b && element[i] !=  min_a)  min_b = element[i];

     }
     cout <<"The smallest element is = "<< min_a <<endl;
     cout<<"The second smallest element is = "<<  min_b <<endl;


return 0;


}
