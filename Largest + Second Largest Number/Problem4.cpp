#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter the number of elements - ";
   cin>>n;
   int element[n],max_a,max_b;
   for (int i=0;i<n;i++){
    cin>>element[i];
   }

    if (element[0] > element[1]){
        max_a = element[0];
        max_b = element[1];
    }

    else {
        max_b = element[0];
        max_a = element[1];
     }
     for ( int i = 2; i<n; i++){
        if (element[i] > max_a){
            max_b = max_a;
            max_a= element[i];
        }
        else if (element[i] > max_b && element[i] != max_a) max_b = element[i];

     }
     cout << "The largest element is = "<<max_a<<endl;
     cout<<" The second largest element is = "<< max_b <<endl;

return 0;


}
