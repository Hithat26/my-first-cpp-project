//hello_name.cpp
#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}