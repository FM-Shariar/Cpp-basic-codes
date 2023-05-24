#include <iostream>
using namespace std;

class Employee
{
protected:
    int employeeID;
    string employeeName;
    double salary;

public:
    Employee()
    {
    }
    Employee(int empid, string empname, double sa)
    {
        employeeID = empid;
        employeeName = empname;
        salary = sa;
    }
    /*~Employee()
    {
    }*/
    void setEmployeeID(int empid)
    {
        employeeID = empid;
    }
    void setEmployeeName(string empname)
    {
        employeeName = empname;
    }
    void setSalary(double sa)
    {
        salary = sa;
    }

    int getEmployeeID()
    {
        return employeeID;
    }
    string getEmployeeName()
    {
        return employeeName;
    }
    double getSalary()
    {
        return salary;
    }

    void displayEmployeeInformation()
    {
        cout << "\tEmployee Information" << endl;
        cout << "Name\t\t:" << employeeName << endl;
        cout << "Employee ID\t:" << employeeID << endl;
        cout << "Salary\t\t:" << salary << " BDT" << endl;
        cout << endl;
    }
};
class Salesman : public Employee
{
protected:
    string salesArea;
    string productName;
    int managerID;

public:
    Salesman() {}
    Salesman(int empid, string empname, double sa, string sArea, string pName, int mID) : Employee(empid, empname, sa)
    {
        salesArea = sArea;
        productName = pName;
        managerID = mID;
    }
    ~Salesman() {}

    void setSalesArea(string sArea)
    {
        salesArea = sArea;
    }
    void setProductName(string pName)
    {
        productName = pName;
    }
    void setManagerID(int mID)
    {
        managerID = mID;
    }

    string getsalesArea()
    {
        return salesArea;
    }
    string getProductName()
    {
        return productName;
    }
    int getManagerID()
    {
        return managerID;
    }

    void showSalesmanDetails()
    {
        cout << "\tSalesman Information" << endl;
        cout << "Name\t\t:" << employeeName << endl;
        cout << "Salesman ID\t:" << employeeID << endl;
        cout << "Manager ID\t:" << managerID << endl;
        cout << "Assigned to\t:" << salesArea << endl;
        cout << "Product Name\t:" << productName << endl;
        cout << "Salary\t\t:" << salary << " BDT" << endl;
        cout << endl;
    }
};

class Manager : public Employee
{
protected:
    string salesArea;

public:
    Manager() {}
    Manager(int empid, string empname, double sa, string sArea) : Employee(empid, empname, sa)
    {
        salesArea = sArea;
    }
    ~Manager() {}
    void setSalesArea(string sArea)
    {
        salesArea = salesArea;
    }
    string getSalesArea()
    {
        return salesArea;
    }
    void showManagerDetails()
    {
        cout << "\tManager Details" << endl;
        cout << "Name\t\t:" << employeeName << endl;
        cout << "Manager ID\t:" << employeeID << endl;
        cout << "In-Charge of\t:" << salesArea << endl;
        cout << "Salary\t\t:" << salary << " BDT" << endl;
        cout << endl;
    }

    void incrementSalary(Salesman *s, double amount)
    {
        s->setSalary(s->getSalary() + amount);
    }
};

int main()
{
    Employee e1(23452, "Rahim", 56200);
    e1.displayEmployeeInformation();

    Manager m1(12015, "Karim", 75200, "Dhaka");
    m1.showManagerDetails();

    Salesman s1(56241, "Abdullah", 25000, "Jamuna Future Park", "Polo Shirt", 55214);
    s1.showSalesmanDetails();

    m1.incrementSalary(&s1, 2000);
    s1.showSalesmanDetails();

    /*Salesman s2(00241, "Jabbar", 26000, "Jamuna Future Park", "Polo Shirt", 45210);
    s2.showSalesmanDetails();*/
   Salesman s2;
    Manager m2;
    m2.incrementSalary(&s2,6000);
    s2.showSalesmanDetails();


    return 0;
}
