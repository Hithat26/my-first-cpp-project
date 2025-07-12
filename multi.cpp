// Multilevel Inheritance
#include <iostream>
#include <string>
using namespace std;

class Person
{
    protected:
        string name;

    public:
        void setName(string n) { name = n; }
        void getName() { cout << "Name: " << name << endl; }
};

class Employee : public Person
{
    protected:
        float salary;
    
    public:
        void setSalary(float s) { salary = s; }
        void getSalary() { cout << "Salary: $" << salary << endl; }
};

class Developer : public Employee
{
    protected:
        string language;
    
    public:
        void setLanguage(string l) { language = l; }
        void display()
        {
            getName();
            getSalary();
            cout << "Language: " << language << endl;
        }
};

int main()
{
    Developer obj;
    obj.setName("Cordelius");
    obj.setSalary(5000.00);
    obj.setLanguage("C++");
    obj.display();
}