//Implement a simple Inheritance
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    protected:
        string name;
        float salary;
    
    public:
        void setDetails(string n, float s)
        {
            name = n;
            salary = s;
        }
        void showDetails()
        {
            cout << "Name: " << name << endl;
            cout << "Salary: $" << salary << endl;
        }
};

class Manager : public Employee
{
    string department;
    public:
        void setDepartment(string d)
        {
            department = d;
        }
        void display()
        {
            showDetails();
            cout << "Department: " << department << endl;
        }
};

int main()
{
    Manager obj;
    obj.setDetails("Brock", 300.00);
    obj.setDepartment("IT");
    obj.display();
    return 0;
}