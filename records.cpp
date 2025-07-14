// Student Records using map<string, int>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    map<string, int> marks;
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    for (int i = 0; i < n; i ++)
    {
        string temp_name;
        int temp_mark;
        cout << "Enter name and marks of student " << i + 1 << ": ";
        cin >> temp_name;
        cin >> temp_mark;
        marks[temp_name] = temp_mark;
    }

    cout << "\nStudent Records\n";
    for (auto p : marks)
    {
        cout << p.first << ": " << p.second << endl;
    }
    
    string to_find;
    cout << "Enter a name to search: ";
    cin >> to_find;

    if(marks.find(to_find) != marks.end())
        cout << marks[to_find] << endl;
    else
        cout << "Student not found" << endl;

    return 0;
}