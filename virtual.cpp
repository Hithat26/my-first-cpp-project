// Use Virtual Functions for Employee types
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    protected:
        string name;
    public:
        virtual void showRole() { cout << "Generic Roles\n"; }
};

class Manager : public Employee
{
    public: 
        void showRole() override { cout << "Role: Manager\n"; }
};

class Engineer : public Employee
{
    public:
        void showRole() override { cout << "Role: Engineer\n"; }
};

int main()
{
    Employee* e = new Manager();
    e->showRole();
    e = new Engineer(); 
    e->showRole();
    return 0;
}

