#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float grade;
};

Student getTopper(Student arr[], int n);

int main()
{
    int n;
    cout << "Enter number of Students: ";
    cin >> n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter data of Student " << (i + 1) << endl;

        cout << "Name: ";
        cin >> arr[i].name;

        cout << "Age: ";
        cin >> arr[i].age;

        cout << "Grade: ";
        cin >> arr[i].grade;
    }

    Student topper = getTopper(arr, n);

    cout << "\nTopper" << endl;
    cout << "Name: " << topper.name << endl;
    cout << "Grade: " << topper.grade << endl;

    return 0;
}

Student getTopper(Student arr[], int n)
{
    Student max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i].grade > max.grade)
        {
            max = arr[i];
        }
    }
    return max;
}
