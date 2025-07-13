// Use STL Algorithms on vector<int>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    cout << "Sorted: ";
    sort(v.begin(), v.end());           // Ascending sort
    for (int temp : v)
        cout << temp << " ";

    cout << "\nReversed: ";
    reverse(v.begin(), v.end());        // Reverse the vector
    for (int temp : v)
        cout << temp << " ";

    int x;
    cout << "\nEnter number to count: ";
    cin >> x;
    cout << "Count = " << count(v.begin(), v.end(), x);       // Count how many times x appears  
        
    int y;
    cout << "\nEnter number to find: ";
    cin >> y;
    if (find(v.begin(), v.end(), y) != v.end()) // Returns iterator to x or v.end()
        cout << y << " found in vector\n";
    else
        cout << y << " not found\n";

    return 0; 
}
