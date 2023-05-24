//Diamond problem with parameterized constructor
#include<iostream>
using namespace std;
class Person{
public: //access specifier or modifier of Father class's constructor
    Person(){
        cout<<"Default Constructor of Person Class Called"<<endl;
    }
    Person(int a){  //parameterized constructor
        cout<<"Constructor of Person class called "<<a<<endl;
    }
};
class Father: virtual public Person{ //Inherits person class
public: //access specifier or modifier of Father class's constructor
    Father(int a): Person(a){  //superclass constructor call from sub class
        cout<<"Constructor of Father class called "<<a<<endl;
    }
};

class Mother: virtual public Person{ //Inherits person class
public: //access specifier or modifier of Mother class's constructor
    Mother(int a): Person (a){ //superclass constructor call from sub class
        cout<<"constructor of Mother class called "<<a<<endl;
    }

};

class Child: public Father, public Mother{ //inherits Father and Mother
public: //access specifier or modifier of Child's class's constructor
    Child(int a): Father(a), Mother(a){//,Person(a){ //super classes constructor call from sub class
        cout<<"constructor of Child's class called "<<a<<endl;
    }

};


int main(){
    Child C(20);
    //Diamond problem solved with virtual inheritance!
    //It is also called virtual inheritance

    /*but still a problem. the default constructor of ‘Person’ is called.
    When we use ‘virtual’ keyword, the default constructor of grandparent class is called
    by default even if the parent classes explicitly call parameterized constructor.*/

   //The solution to call parameterized constructor of Person is given in another text file

}
