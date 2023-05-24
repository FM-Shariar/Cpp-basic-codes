#include<iostream>
#include<conio.h>
using namespace std;
    //creat a person class
class person{
    protected:      //protected for inheritance
        string name,address;
    public:
         int age;
        person(string name,string address,int age){   //parameterized constructor

            this-> name=name;
            this-> address=address;
            this-> age=age;
        }
        void setName(string x){
            name=x;
        }
        string getName(){
            return name;
        }
        void setAddress(string y){
            address=y;
        }
        string getAddress(){
            return address;
        }
        void setAge(int y){
            age=y;
        }
        int getAge(){
            return age;
        }
        ~person(){} //Destructor
        void PShowDetails(){
            cout<< "      Name    :"<<name<<endl;
            cout<< "      Age     :"<<age<<endl;
            cout<< "    Address   :"<<address<<endl;
        }
};

class Employee: virtual public person{      // create a class named Employee
                                           //use virtual for diamond problem

        //name,age
    protected:
        float salary;
    public:
        string post,work_tym,phn_num;

    Employee(string name,string address,
          int age,float salary,string post,
          string work_tym, string phn_num):person(name,address,age){

                        this->salary=salary;
                        this->post=post;
                        this->work_tym=work_tym;
                        this->phn_num=phn_num;
                        }

                 void setSalary(float x){
                          salary=x;
                          }
                float getSalary(){
                        return salary;
                        }
                void setPost(string y){
                        post=y;
                          }
                string getPost(){
                    return post;
                        }
                void setWorktym(string z){
                          work_tym=z;
                          }
                string getWorktym(){
                        return work_tym;
                        }
                void setPhnNum(string p){
                          phn_num=p;
                          }
                string getPhnNum(){
                        return phn_num;
                        }

                ~Employee(){}
                void EshowDetails(){
                    cout<<" Employee Details~ "<<endl;
                          person::PShowDetails();
                    cout<< "     Post     :"<<post<<endl;
                    cout<< "    Salary    :"<<salary<<endl;
                    cout<< "   Work time  :"<<work_tym<<endl;
                    cout<< " Phone number :"<<phn_num<<endl;
                }
};
class officer: public Employee{     //creat a class officer

    //name,age,salary,post,wrk tym,phn num
  protected:
      int id;
  public:
    string institute;
      officer(string name,string address,
          int age,float salary,string post,
          string work_tym, string phn_num,
          string institute,int id): Employee(name,address,
                                             age,salary,post,
                                             work_tym,phn_num),person(name,address,age){

                this->institute=institute;
                this->id=id;
          }
          void setIns(string i){
                        institute=i;
                          }
                string getIns(){
                        return institute;
                        }
            void setId(int d){
                          id=d;
                          }
                int getId(){
                        return id;
                        }
            ~officer(){}
          void OshowDetails(){
                cout<< " Officer Details~ "<<endl;
                    person::PShowDetails();
                cout<< "      ID      :"<<id<<endl;
                cout<< "     Post     :"<<post<<endl;
                cout<< "    Salary    :"<<salary<<endl;
                cout<< "   Work time  :"<<work_tym<<endl;
                cout<< " Phone number :"<<phn_num<<endl;
                cout<< " Institute    :"<<institute<<endl;
          }
};

class faculty: virtual public person{       // create a class named Faculty
                                             //multiple inheritance

         //name,age,address
     protected:
        int id;
        string salary;
     public:
         string institute,post;
        faculty(string name,string address,int age,string post,string institute,string salary):person(name,address,age){

                    this->post=post;
                    this->institute=institute;
                    this->salary=salary;
                    }
            void setIns(string i){
                        institute=i;
                          }
                string getIns(){
                        return institute;
                        }
            void setId(int i){
                          id=i;
                          }
                int getId(){
                        return id;
                        }
            ~faculty(){}
            void FshowDetails(){
                cout<< " Faculty Details~ "<<endl;
                      person::PShowDetails();
                cout<< "    Post      :"<<post<<endl;
                cout<< " Institute    :"<<institute<<endl;
                cout<< "   salary     :"<<salary<<endl;
            }

};

class Student: virtual public person{      // create a class named Student
                                          //use virtual for diamond problem

        //name,add,age

    protected:
        float cgpa;
    public:
        string uni,dept,id,sem;

        Student(string name,string address,
                 int age,float cgpa,
                 string uni,string dept,
                string id,string sem):person(name,address,age){

                        this->cgpa=cgpa;
                        this->uni=uni;
                        this->dept=dept;
                        this->id=id;
                        this->sem=sem;
                }

                void setCgpa(float c){
                          cgpa=c;
                          }
                float getCgpa(){
                        return cgpa;
                        }
                void setUni(string u){
                          uni=u;
                          }
                string getUni(){
                        return uni;
                        }
                void setDept(string d){
                          dept=d;
                          }
                string getDept(){
                        return dept;
                        }
                void setId(string i){
                          id=i;
                          }
                string getId(){
                        return id;
                        }
                void setSem(string s){
                          sem=s;
                          }
                string getSem(){
                        return sem;
                        }

                ~Student(){}
                void STshowDetails(){
                    cout<<" Student Details~ "<<endl;
                        person::PShowDetails();
                    cout<< " University   :"<<uni<<endl;
                    cout<< " Department   :"<<dept<<endl;
                    cout<< " Student ID   :"<<id<<endl;
                    cout<< " Current CGPA :"<<cgpa<<endl;
                    cout<< " Semester     :"<<sem<<endl;
                }
};

class GraduateStudent:public Student{        // create a class Graduate Student
                                            //multiple inheritance

        //name,add,age,cgpa,uni,id,dept,sem
    protected:
        int passingYear;
        string currentSituation;
    public:
        GraduateStudent(string name,string address,
                 int age,float cgpa,
                 string uni,string dept,
                string id,string sem,int passingYear,string currentSituation):Student(name,address,
                                                                                    age, cgpa,uni,dept,
                                                                                    id,sem),person(name,address,age){

                    this->passingYear=passingYear;
                    this->currentSituation=currentSituation;
                }
         void setPaYr(int p){
                    passingYear=p;
                          }
            int getPaYr(){
                    return passingYear;
                        }
        void setCsituation(string c){
                          currentSituation=c;
                          }
           string getCsituation(){
                        return currentSituation;
                        }
            void GstdShowDetails(){
                   cout<<" Graduation student Details~ "<<endl;
                        person::PShowDetails();
                    cout<< " University   :"<<uni<<endl;
                    cout<< " Department   :"<<dept<<endl;
                    cout<< " Student ID   :"<<id<<endl;
                    cout<< "  CGPA        :"<<cgpa<<endl;
                    cout<< " Semester     :"<<sem<<endl;
                    cout<< "Passing Year  :"<<passingYear<<endl;
                    cout<< "Current Status:"<<currentSituation<<endl;
            }
};
class TA: virtual public faculty, virtual public Student{

    // name, address,age, salary, post,institute, dept , id//name,add,age,cgpa,uni,id,dept,sem

public:
    TA(string name,string address,
          int age,string post,string institute,
          string salary,float cgpa,string uni,
          string dept,string id,string sem):person(name,address,age),faculty(name,address,age,
                                                                post,institute,salary),
                                                        Student(name,address,age,
                                                            cgpa,uni,dept,id,sem){}

                void TAshowDetails(){

                               cout<<" TA student Details~ "<<endl;
                                      person::PShowDetails();
                               cout<< " University   :"<<uni<<endl;
                               cout<< " Department   :"<<dept<<endl;
                               cout<< " Student ID   :"<<Student::id<<endl;
                               cout<< "  CGPA        :"<<cgpa<<endl;
                               cout<< " Semester     :"<<sem<<endl;
                               cout<< " Post         :"<<post<<endl;
                               cout<< " Salary       :"<<salary<<endl;

                           }

};

int main(){
    person p(" Shahriar ","Tongi,Gazipur",21);
    p.PShowDetails();
    cout<<endl;
    Employee e(" John Wick "," New York",27,50000," Manager "," 8 to 12 hours", "01356789025");
    e.EshowDetails();
    cout<<endl;
    officer o(" Bruce Wayne "," Gotham City ",30,70000,"Officer","6 to 8 hours","01456738925","AIUB",3344);
    o.OshowDetails();
    cout<<endl;
    faculty f("John Keating","Los Angeles",40," Assistant Professor","AIUB","70000");
    f.FshowDetails();
    cout<<endl;
    Student s(" Utchas "," College gate", 21,3.9,"AIUB","CSE","22-46525-1","1st");
    s.STshowDetails();
    cout<<endl;
    GraduateStudent Gstd("Abdullah "," Bashudhara",24,3.88,"AIUB","CSE","16-46738-2","12th",2020,"At GOOGLE");
    Gstd.GstdShowDetails();
    cout<<endl;
    TA t(" Minar ","Kuril",23," IP LAB TA","AIUB","0.00",3.95,"AIUB","CSE","17-43689-3","5th");
    t.TAshowDetails();
getch();
}

