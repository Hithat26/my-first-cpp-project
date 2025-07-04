// Check whether the number isodd or even
#include <iostream>
using namespace std;

bool isEven(int);

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (isEven(n))
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "Odd" << endl;
    }
    return 0;
}

bool isEven(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}