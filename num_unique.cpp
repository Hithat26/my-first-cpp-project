// Count Unique Numbers in a List using unordered_set
#include <unordered_set>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of Integers: ";
    cin >> n;

    cout << "Enter elements: ";
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        s.insert(temp);
    }

    for (int x : s)
    {
        cout << x << " ";
    }
    return 0;
}