// Check for Duplicates in an Array Using unordered_set
#include <unordered_set>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    unordered_set<int> common;
    unordered_set<int> duplicate;
    for (int i : arr)
    {
        if (common.find(i) != common.end())
            duplicate.insert(i);
        else
            common.insert(i);
    }

    if (duplicate.empty())
        cout << "No Duplicates";
    else
    {
        cout << "Duplicates: ";
        for (int i : duplicate)
            cout << i << " ";
    }
    cout << endl;
    return 0;
}