#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string name;
        int age;
        float grade;
    
    public:
        Student()
        {
            name = "Unknown";
            age = 0;
            grade = 0.0;
        }
        Student(string n, int a, float g)
        {
            name = n;
            age = a;
            grade = g;
        }
        void display()
        {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Grade: " << grade << endl;
        }
};

int main()
{
    Student s1;
    Student s2("Hithat", 20, 9.5);

    s1.display();
    s2.display();
    return 0;
}