#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    static int count;  // static member declaration

public:
    Student(string s)
    {
        name = s;
        count++;  // increment static count
    }

    void display()
    {
        cout << "Name: " << name << endl;
    }

    static void getCount()  // static member function
    {
        cout << "Number of Students: " << count << endl;
    }
};

// static member definition outside the class
int Student::count = 0;

int main()
{
    Student s1("Colt");
    Student s2("Shelly");
    Student s3("Spike");

    Student::getCount();  // calling static function via class name (recommended)
    return 0;
}
