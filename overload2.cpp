// Overload == for Students
#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int rollNo;

    public:
        Student(string s, int r)
        {
            name = s;
            rollNo = r;
        }

        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Roll No: " << rollNo << endl;
        }

        bool operator==(const Student &obj)
        {
            if(name == obj.name && rollNo == obj.rollNo)
                return true;
            else
                return false;
        }
};

int main()
{
    Student s1("Byron", 56);
    Student s2("Nita", 12);
    if(s1 == s2)
        cout << "Same Student" << endl;
    else
        cout << "Different Students" << endl;
    return 0;
}