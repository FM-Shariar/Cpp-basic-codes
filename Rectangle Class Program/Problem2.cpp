#include<iostream>
using namespace std;

class Rectangle
{

private:
    float Length;
    float Breadth;

public:
    Rectangle()
    {
        Length=0;
        Breadth=0;
    }
    Rectangle(float L, float B)
    {
        Length=L;
        Breadth=B;
    }

    void setLength(float L)
    {
        Length=L;
    }
    float getLength()
    {
        return Length;
    }
    void setBreadth(float B)
    {
        Breadth=B;
    }
    float getBreadth()
    {
        return Breadth;
    }

    float getArea()
    {
        cout<<endl<<"The Area of the Rectangle is = "<<Length*Breadth<<endl;
        return 0;
    }
};

int main()
{
    float l,b;
    cout<<"Input Rectangle Length = ";
    cin>>l;
    cout<<endl;
    cout<<"Input Rectangle Breadth = ";
    cin>>b;

    Rectangle r1(l,b);
    r1.getArea();

    return 0;
}
