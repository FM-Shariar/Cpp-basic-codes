#include<iostream>
#include<math.h>
 using namespace std;
 int main()
{
   float v1,v2;
     cout<<"Enter body mass- "<<"(in Kg)"<<endl;
        cin>>v1;
     cout<<"Enter body height- "<<"(in meter)"<<endl;
        cin>>v2;
   float BMI;
         BMI=v1/pow(v2,2);
     cout<<"Your BMI is- "<<BMI<<endl;

   return 0;

}
