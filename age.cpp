// age.cpp
#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if (age < 18)
    {
        cout << "You are a minor." << endl;
    }
    else if (age >= 18 && age <= 60)
    {
        cout << "You are an adult." << endl;
    }
    else if (age > 60)
    {
        cout << "You are a senior citizen." << endl;
    }
    return 0;
}