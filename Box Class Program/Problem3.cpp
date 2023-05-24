#include<iostream>
using namespace std;
//creating Box class
class Box
{

private:
    float length;
    float breadth;
    float height;
public:
    //Empty Constructor
    Box()
    {
        length=0;
        breadth=0;
        height=0;
    }
    //Parameterized Constructor
    Box(float l,float b,float h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    //Destructor
    ~Box()
    {
    }
    //Setter Method for Length
    void setLength(float l)
    {
        length=l;
    }
    //Getter Method for Length
    float getlength()
    {
        return length;
    }
    //Setter Method for Breadth
    void setBreadth(float b)
    {
        breadth=b;
    }
    //Getter Method for Breadth
    float getBreadth()
    {
        return breadth;
    }
    //Setter Method for Height
    void setHeight(float h)
    {
        height=h;
    }
    //Getter Method for Height
    float getHeight()
    {
        return height;
    }
    //Volume Calculation
    float getVolume()
    {
        return length*breadth*height;
    }
    //Area Calculation
    float getArea()
    {
        return length*breadth;
    }
    //Perimeter Calculation
    float getPerimeter()
    {
        return 2*(length+breadth);
    }
    void showDetails()
    {
        cout<<"=======Information About Box ======="<<endl;
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Box Volume: "<<getVolume()<<endl;
        cout<<"Surface Area: "<<getArea()<<endl;
        cout<<"Perimeter of Surface: "<<getPerimeter()<<endl;
        cout<<"***********XXXXXXX**********"<<endl;
    }

};
int main()

{
    float l,b,h;
    cout<<"Enter the Length of box - ";
    cin>>l;
    cout<<"Enter the Breadth of box - ";
    cin>>b;
    cout<<"Enter the Height of box - ";
    cin>>h;
    Box b1(l,b,h);
    b1.showDetails();

    return 0;
}
