// Count Frequency of Each Digit in an Integer
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    unordered_map<int, int> map;
    int temp = n;
    while (temp != 0)
    {
        map[temp % 10]++;
        temp /= 10;
    }

    for (auto p : map)
    {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}