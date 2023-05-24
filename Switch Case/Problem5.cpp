#include<iostream>
using namespace std;

int main()
{
    int products,quantity;
    float product1=200.75,product2=345.50,product3=775.75,product4=400.35,product5=1200.75;
    float sum;
    cout<<"Select product number(1-5): ";
       cin>>products;
    cout<<"Enter product quantity: ";
       cin>>quantity;
    switch(products){
    case 1:
    sum = product1*quantity;
    cout<<"Total retail value of product sold is- "<<sum<<endl;
    break;
    case 2:
    sum=product2*quantity;
    cout<<"Total retail value of product sold is- "<<sum<<endl;
    break;
    case 3:
    sum=product3*quantity;
    cout<<"Total retail value of product sold is- "<<sum<<endl;
    break;
    case 4:
    sum =product4*quantity;
    cout<<"Total retail value of product sold is- "<<sum<<endl;
    break;
    case 5:
    sum=product5*quantity;
    cout<<"Total retail value of product sold is- "<<sum<<endl;
    break;
    default:
    cout<<"Please enter product number between 1 to 5"<<endl;


    return 0;
    }
}
