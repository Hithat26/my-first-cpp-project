// Vector of Objects - Students with Names and Marks
#include <vector>
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int marks;

public:
    Student(string n, int m) : name(n), marks(m) {}
    void display() { cout << "Name: " << name << ", Marks: " << marks << endl; }
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> list;
    for (int i = 0; i < n; i++)
    {
        int tempm;
        string temps;
        cout << "Enter name and marks of student " << i + 1 << ": ";
        cin >> temps;
        cin >> tempm;
        list.push_back(Student(temps, tempm));
    }

    cout << "Student Records: \n";
    for(Student temp : list)
        temp.display();

    return 0;
}
