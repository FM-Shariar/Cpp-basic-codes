#include<iostream>
using namespace std;
class Person  //Person Class Created
{
protected:
    string Name;
    int Age;
    string Address;
    string BloodGroup;
    string Gender;
public:
    string Nationality;

    Person()  //Default Constructor
    {
        cout<<"No Data!!!"<<endl;
    }
    Person(string N,int A,string Add,string BG,string Na,string G)  //Parameterized Constructor
    {
        Name=N;
        Age=A;
        Address=Add;
        BloodGroup=BG;
        Nationality=Na;
        Gender=G;
    }

    void setName(string N)   //Setter Method
    {
        Name=N;
    }
    string getName()          //Getter Method
    {
        return Name;
    }
    void setAge (int A)
    {
        Age=A;
    }
    int getAge ()
    {
        return Age;
    }
    void setAddress (string Add)
    {
        Address=Add;
    }
    string getAddress ()
    {
        return Address;
    }

    void setBloodGroup (string BG)
    {
        BloodGroup=BG;
    }
    string getBloodGroup ()
    {
        return BloodGroup;
    }

    void setNationality(string Na)
    {
        Nationality=Na;
    }
    string getNationality()
    {
        return Nationality;
    }
    void setGender(string G)
    {
        Gender=G;
    }
    string getGender()
    {
        return Gender;
    }

    ~Person()      //Person Class Destructor
    {

    }
    void showPersonDetails()
    {
        cout<<"Name -             "<<Name<<endl;
        cout<<"Age -              "<<Age<<endl;
        cout<<"Address -          "<<Address<<endl;
        cout<<"Blood Group -      "<<BloodGroup<<endl;
        cout<<"Nationality -      "<<Nationality<<endl;
        cout<<"Gender -           "<<Gender<<endl;
    }
};
class Employee:public Person //Employee Class Created
                             //Employee Inheriting Person
{
protected:
    double Salary;
    string Status;
    string Institution;

public:
    Employee()  //Default Constructor
    {
        cout<<"No Employee Data!!!."<<endl;
    }
    Employee(string N,int A,string Add,string BG,string Na,string I,double S,string St,string G)  //Parameterized Constructor
        :Person(N,A,Add,BG,Na,G)
    {
        Institution=I;
        Salary=S;
        Status=St;
    }
    void setSalary(double S)  //Setter Method
    {
        Salary=S;
    }
    double getSalary()  //Getter Method
    {
        return Salary;
    }
    void setStatus(string St)
    {
        Status=St;
    }
    string getStatus()
    {
        return Status;
    }
    void setInstitution(string I)
    {
        Institution=I;
    }
    string getInstitution()
    {
        return Institution;
    }
    ~Employee()  //Employee CLass Destructor
    {

    }
    void showEmployeeDetails()
    {
        Person::showPersonDetails();
        cout<<"Institution -      "<<Institution<<endl;
        cout<<"Salary -           "<<Salary<<endl;
        cout<<"Status -           "<<Status<<endl;
        cout<<"Nationality -      "<<Nationality<<endl;
    }

};
class Officer:public Employee  //Officer Class Created
                               //Officer Inheriting Employee
{
public:
    Officer() //Default Constructor
    {
        cout<<"No Data!!!"<<endl;
    }
    Officer(string N,int A,string Add,string BG,string Na,string I,double S,string St,string G)  //Parameterized Constructor
        :Employee(N,A,Add,BG,Na,I,S,St,G)
    {


    }
    ~Officer()  //Officer Class Destructor
    {

    }
    void showOfficerDetails()
    {
        Person::showPersonDetails();
        cout<<"Institution -      "<<Institution<<endl;
        cout<<"Salary -           "<<Salary<<endl;
        cout<<"Status -           "<<Status<<endl;
        cout<<"Nationality -      "<<Nationality<<endl;

    }
};
class Faculty:public Employee  //Faculty CLass Created
                            //Faculty Inheriting Employee
{
protected:
    string Mobile;
public:
    Faculty()   //Default Constructor
    {
        cout<<"No Data!!!"<<endl;
    }
    Faculty(string N,int A,string Add,string M,string BG,string Na,string I,double S,string St,string G)  //Parameterized Constructor
        :Employee(N,A,Add,BG,Na,I,S,St,G)
    {
        Mobile=M;
    }
    ~Faculty()  //Faculty CLass Destructor
    {

    }
    void showFacultyDetails()
    {
        Person::showPersonDetails();
        cout<<"Mobile -           "<<Mobile<<endl;
        cout<<"Institution -      "<<Institution<<endl;
        cout<<"Salary -           "<<Salary<<endl;
        cout<<"Status -           "<<Status<<endl;
        cout<<"Nationality -      "<<Nationality<<endl;
    }
};
class Student:public Person  //Student CLass Created
                             //Student Inheriting Person
{
protected:
    float CGPA;
public:
    string University;
    string Department;
    string ID;
    string Semester;
    Student()  //Default Constructor
    {
        cout<<"No Data!!!"<<endl;
    }
    Student(string N,int A,string Add,string BG,string Na,string U,string D,
            string id,string SEM,float cgpa,string G):Person(N,A,Add,BG,Na,G)  //Parameterized Constructor
    {

        University=U;
        Department=D;
        ID=id;
        CGPA=cgpa;
        Semester=SEM;
    }

    void setUniversity(string U)  //Setter Method
    {
        University=U;
    }
    string getUniversity()  //Getter Method
    {
        return University;
    }
    void setDepartment(string D)
    {
        Department=D;
    }
    string getDepartment()
    {
        return Department;
    }
    void setID(string id)
    {
        ID=id;
    }
    string getID()
    {
        return ID;
    }
    void setSemester(string SEM)
    {
        Semester=SEM;
    }
    string getSemester()
    {
        return Semester;
    }
    void setCGPA(float cgpa)
    {
        CGPA=cgpa;
    }
    float getCGPA()
    {
        return CGPA;
    }
    ~Student()  //Student CLass Destructor
    {

    }
    void showStudentDetails()
    {
        Person::showPersonDetails();
        cout<<"University -       "<<University<<endl;
        cout<<"Department -       "<<Department<<endl;
        cout<<"ID -               "<<ID<<endl;
        cout<<"Current Semester - "<<Semester<<endl;
        cout<<"CGPA -             "<<CGPA<<endl;
        cout<<"Nationality -      "<<Nationality<<endl;
    }

};
class GraduateStudent:public Student  //GraduateStudent Class Created
 {                                    //GraduateStudent Inheriting Student;
protected:
    string Work;
    int PassingYear;
public:
    GraduateStudent()  //Default Constructor
    {
        cout<<"No Data!!!"<<endl;
    }
    GraduateStudent(string N,int A,string Add,string BG,string Na,string U,string D,  //Parameterized Constructor
                    string id,string SEM,float cgpa,string W,int PY,string G)
        :Student(N,A,Add,BG,Na,U,D,id,SEM,cgpa,G)
    {

        Work=W;
        PassingYear=PY;
    }

    void setWork(string W)  //Setter Method
    {
        Work=W;
    }
    string getWork()  //Getter Method
    {
        return Work;
    }
    void setPassingYear(int PY)
    {
        PassingYear=PY;
    }
    int getPassingYear()
    {
        return PassingYear;
    }
    ~GraduateStudent()  //GraduateStudent CLass Destructor
    {

    }
    void showGraduateStudentDetails()
    {
        Person::showPersonDetails();
        cout<<"University -       "<<University<<endl;
        cout<<"Department -       "<<Department<<endl;
        cout<<"ID -               "<<ID<<endl;
        cout<<"Current Semester - "<<Semester<<endl;
        cout<<"CGPA -             "<<CGPA<<endl;
        cout<<"Working At -       "<<Work<<endl;
        cout<<"Passing Year -     "<<PassingYear<<endl;
    }
};
int main()
{
    Person P1("Rahim",56,"Cumilla","O+","Bangladeshi","Male");
    cout<<"                    "<<endl;
    cout<<"    PERSON DETAILS. "<<endl;
    cout<<"                    "<<endl;
    P1.showPersonDetails();

    Employee E("Karim",45,"Dhaka","B+","Bangladeshi","AIUB",30000,"Cashier","Male");
    cout<<"                    "<<endl;
    cout<<"    EMPLOYEE DETAILS.  "<<endl;
    cout<<"                    "<<endl;
    E.showEmployeeDetails();

    Officer O("Monir",48,"Dhaka","B+","Bangladeshi","AIUB",50000,"MD","Male");
    cout<<"                    "<<endl;
    cout<<"    OFFICER DETAILS.   "<<endl;
    cout<<"                    "<<endl;
    O.showOfficerDetails();

    Faculty F("Partho",34,"Khulna","01818645671","AB+","Indian","AIUB",100000,"Teacher","Male");
    cout<<"                    "<<endl;
    cout<<"    FACULTY DETAILS.   "<<endl;
    cout<<"                    "<<endl;
    F.showFacultyDetails();

    Student S("Fahim",22,"Cumilla","O+","Bangladeshi","AIUB","CSE","19-41732-1","3rd",3.85,"Male");
    cout<<"                    "<<endl;
    cout<<"    STUDENT DETAILS.   "<<endl;
    cout<<"                    "<<endl;
    S.showStudentDetails();

    GraduateStudent GS("Shariar",29,"Pabna","AB+","Bangladeshi","AIUB","CSE","15-46542-1","N/A",3.85,"IBM",2008,"Male");
    cout<<"                    "<<endl;
    cout<<"     GRADUATE STUDENT DETAILS.    "<<endl;
    cout<<"                    "<<endl;
    GS.showGraduateStudentDetails();

    return 0;
}
