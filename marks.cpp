// Use Vector to store and Print Marks
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number of students: ";
    cin >> n;

    vector<int> marks;
    cout << "Enter Marks of students:\n";
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        marks.push_back(temp);
    }
    
    cout << "\nMarks printing through for-loop\n";
    for (int i = 0; i < n; i++)
        cout << marks[i] << " ";

    cout << "\nMarks printing through for-each-loop\n";
    for (int mark : marks)
        cout << mark << " ";

    return 0;
}