#include<iostream>
using namespace std;
class Box
{

private:
    float Length;
    float Width;
    float Height;

public:
    static int count;
    int Boxcount()
    {
        return count;
    }

    Box()
    {
        Length=0;
        Width=0;
        Height=0;
        count++;
    }

    Box(float l, float w, float h)
    {
        Length=l;
        Width=w;
        Height=h;
        count++;
    }


    void setLength(float l)
    {
        Length=l;
    }
    float getLength()
    {
        return Length;
    }

    void setWidth(float w)
    {
        Width=w;
    }
    float getWidth()
    {
        return Width;
    }

    void setHeight(float l)
    {
        Height=l;
    }
    float getHeight()
    {
        return Height;
    }

    void showDetails()
    {
        cout<<"Details For Box "<<count<<":"<<endl;
        cout<<"length = "<<Length<<endl;
        cout<<"Width = "<<Width<<endl;
        cout<<"height = "<<Height<<endl;
        cout<<endl;
    }

    Box operator+(Box b)
    {
        cout<<"Summation : "<<endl;
        Box Final;
        Final.setLength(Length+b.getLength());
        Final.setWidth(Width+b.getWidth());
        Final.setHeight(Height+b.getHeight());
        return Final;
    }

    Box operator*(Box b)
    {
        cout<<"Multiplication : "<<endl;
        Box Final;
        Final.setLength(Length*b.getLength());
        Final.setWidth(Width*b.getWidth());
        Final.setHeight(Height*b.getHeight());
        return Final;
    }

};

int Box::count=0;

int main()
{

    Box b1(4,13,20);
    b1.showDetails();

    Box b2(5,2,2);
    b2.showDetails();

    Box b3=b1+b2;
    b3.showDetails();

    Box b4=b1*b2;
    b4.showDetails();

    return 0;
}
