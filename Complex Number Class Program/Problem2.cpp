#include<iostream>
using namespace std;
class Complex
{
private:
    float Real;
    float Img;

public:
    Complex()
    {
        Real=0;
        Img=0;
    }
    Complex(float r, float i)
    {
        Real=r;
        Img=i;
    }

    void setReal(float r)
    {
        Real=r;
    }
    float getReal()
    {
        return Real;
    }

    void setImg(float i)
    {
        Img=i;
    }
    float getImg()
    {
        return Img;
    }

    Complex operator+(Complex c)
    {
        cout<<"complex + complex = "<<endl;
        Complex Sum;
        Sum.setReal(Real+c.getReal());
        Sum.setImg(Img+c.getImg());
        return Sum;


    }

    Complex operator+(float f)
    {
        cout<<"complex + int = "<<endl;
        Complex Sum;
        Sum.setReal(Real+f);
        Sum.setImg(Img);
        return Sum;

    }

    Complex operator-(Complex d)
    {
        cout<<"complex - complex = "<<endl ;
        Complex Sub;
        Sub.setReal(Real-d.getReal());
        Sub.setImg(Img-d.getImg());
        return Sub;

    }

    Complex operator-(float d)
    {
        cout<<"complex - int = "<<endl ;
        Complex Sub;
        Sub.setReal(Real-d);
        Sub.setImg(Img);
        return Sub;

    }

    Complex operator*(Complex e)
    {
        cout<<"complex * complex = "<<endl;
        Complex Multi;
        Multi.setReal(Real*e.getReal()+Img*e.getImg()*-1);
        Multi.setImg(Real*e.getImg()+Img*e.getReal());
        return Multi;

    }

    Complex operator*(float e)
    {
        cout<<"complex * int = "<<endl;
        Complex Multi;
        Multi.setReal(Real*e);
        Multi.setImg(Img*e);
        return Multi;

    }



    void showDetails()
    {
        if(Img<0)
        {
            cout<<Real<<Img<<"i";
        }
        else if(Img>0)
        {
            cout<<Real <<"+"<<Img<<"i";
        }
        if(Img==0)
        {
            cout<<Real ;
        }

        cout<<endl;
    }

};

int main()
{

    Complex c1(5,6);
    Complex c2(10,15);

    cout<<"Show Details For C1 = "<<endl;
    c1.showDetails();
    cout << "Show Details For C2 = "<<endl;
    c2.showDetails();

    Complex c3 = c1 + c2;
    c3.showDetails();

    Complex c4= c1 + 7;
    c4.showDetails();

    Complex c5 = c1 - c2;
    c5.showDetails();

    Complex c6 = c2 - 20;
    c6.showDetails();

    Complex c7 = c1 * c2;
    c7.showDetails();

    Complex c8 = c1 * 3;
    c8.showDetails();

    return 0;
}
