// Sort Students by Marks (Descending)
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int marks;
    public:
        Student(string n, int m) : name(n), marks(m){}
        void display() { cout << "Name: " << name << ", Marks: " << marks << endl; }
        int getmarks(){ return marks;}
};

int main()
{
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    vector<Student> v;
    for (int i = 0; i < n; i++)
    {
        string temp_name;
        int temp_marks;
        cout << "Enter name and marks of student " << i + 1 << ": ";
        cin >> temp_name;
        cin >> temp_marks;
        v.push_back(Student(temp_name, temp_marks));
    }
        sort(v.begin(), v.end(), [](Student a, Student b)
        {
            return a.getmarks() > b.getmarks(); // for descending order
        });

        for (Student temp : v)
        {
            temp.display();
        }
    return 0;
}