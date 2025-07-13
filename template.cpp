// Template Function to Find Maximum
#include <iostream>
using namespace std;

template<typename T>
T getmax(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

int main()
{
    cout << "Integer: " << getmax<int>(3, 5) << endl;
    cout << "Float: " << getmax<float>(2.3f, 4.6f) << endl;
    cout << "Character: " << getmax<char>('d', 't') << endl;
    return 0; 
}