// Count and Display All Duplicate Integers in Sorted Order Using multiset
#include <set>
#include <map>
#include <iostream>
using namespace std;

int main()
{
    multiset<int> ms;
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter all elements: ";

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ms.insert(temp);
    }

    map<int, int> freq;
    for (auto x : ms)
    {
        freq[x]++;
    }

    for (auto x : freq)
    {
        if (x.second > 1)
        {
            cout << x.first << ": " << x.second << " times" << endl;
        }
    }
    return 0;
}