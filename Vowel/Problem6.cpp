#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<< "Input character numbers - ";
    cin>>n;
    char ch[n];
    char convt[n];
    char convert;

    for (int i=0; i<n; i++)
    {
       cin>>ch[i];
       if (ch[i]>=65 && ch[i]<=92)
        {
          convert=ch[i]+32;
          convt[i]=convert;
        }
    else convt[i]=ch[i];

    }

    for (int i=0; i<n; i++)
      {
            if(convt[i] == 'a' || convt[i] == 'e' || convt[i] == 'i' || convt[i] == 'o' || convt[i] == 'u')
               {
                  cout<<ch[i]<<" ";
               }
      }
     cout<<endl;
return 0;
}
