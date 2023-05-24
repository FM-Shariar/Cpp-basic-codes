#include<iostream>
#include<iomanip>
using namespace std;

float Current_cgpa = 0.00;
float Semester_cgpa= 0.00;
int Current_credits=0,n=0;
int Total_credit=0;
float Total_cgpa=0;
float cgpa=0.00;

void Only_cgpa(float a,int b)
{
    if(a>=90.00 && a<=100.00)
    {
        cout<<"Your grade in this course A+."<<endl;
        cgpa=cgpa+((float)b*4.00);
    }
    else if(a>=85.00 && a<90.00)
    {
        cout<<"Your grade in this course A."<<endl;
        cgpa=cgpa+((float)b*3.75);
    }
    else if(a>=80.00 && a<85.00)
    {
        cout<<"Your grade in this course B+."<<endl;
        cgpa=cgpa+((float)b*3.50);
    }
    else if(a>=75.00 && a<80.00)
    {
        cout<<"Your grade in this course B."<<endl;
        cgpa=cgpa+((float)b*3.25);
    }
    else if(a>=70.00 && a<75.00)
    {
        cout<<"Your grade in this course C+."<<endl;
        cgpa=cgpa+((float)b*3.00);
    }
    else if(a>=65.00 && a<70.00)
    {
        cout<<"Your grade in this course C."<<endl;
        cgpa=cgpa+((float)b*2.75);
    }
    else if(a>=60.00 && a<65.00)
    {
        cout<<"Your grade in this course D+."<<endl;
        cgpa=cgpa+((float)b*2.50);
    }
    else if(a>=50.00 && a<60.00)
    {
        cout<<"Your grade in this course D."<<endl;
        cgpa=cgpa+((float)b*2.25);
    }
    else if(a<50)
    {
        cout<<"Your grade in this course F."<<endl;
        cgpa=cgpa+((float)b*0.00);
    }
}
void Calculate_cgpa()
{
    cout<<"How many course do you take this semester - ";
    cin>>n;
    cout<<endl;
    for(int i=1; i<=n; i++)
    {
        float a=0.00;
        int b=0;
        if(i==1)
        {
            cout<<"Enter your 1st course number - ";
            cin>>a;
            cout<<"Enter your 1st course credit - ";
            cin>>b;
            Total_credit = Total_credit + b;
            Only_cgpa(a,b);
        }
        else if(i==2)
        {
            cout<<"Enter your 2nd course number - ";
            cin>>a;
            cout<<"Enter your 2nd course credit - ";
            cin>>b;
            Total_credit = Total_credit + b;
            Only_cgpa(a,b);
        }
        else if(i==3)
        {
            cout<<"Enter your 3rd course number - ";
            cin>>a;
            cout<<"Enter your 3rd course credit - ";
            cin>>b;
            Total_credit = Total_credit + b;
            Only_cgpa(a,b);
        }
        else
        {
            cout<<"Enter your "<<i<<"th course number - ";
            cin>>a;
            cout<<"Enter your "<<i<<"th course credit - ";
            cin>>b;
            Total_credit = Total_credit + b;
            Only_cgpa(a,b);
        }
    }
}
void Calculate_Semester_CGPA()
{
    Calculate_cgpa();
    Semester_cgpa = cgpa/(float)Total_credit;
    cout<<"Your total completed credits in this semester - "<<Total_credit<<endl;
    cout<<"Your total cgpa in this semester - "<< fixed << setprecision(2) << Semester_cgpa<<endl;
}
void Calculate_Total_CGPA()
{
    cout<<"Enter your current cgpa (if fresher enter 0) - ";
    cin>>Current_cgpa;
    cout<<endl;
    cout<<"Total completed credits (if fresher enter 0)- ";
    cin>>Current_credits;
    cout<<endl;
    Calculate_cgpa();
    Total_cgpa = (Current_cgpa*(float)Current_credits+cgpa)/(Total_credit+Current_credits);
    cout<<"Your total completed credits after this semester - "<<Total_credit+Current_credits<<endl;
    cout<<"Your total cgpa after this semester - "<< fixed << setprecision(2) << Total_cgpa<<endl;
}

int main()
{
    //Calculate_Semester_CGPA();
    //Calculate_Total_CGPA();
}
