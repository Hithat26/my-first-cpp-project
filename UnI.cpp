// Find Union and Intersection of Two Arrays Using unordered_set
#include <unordered_set>
#include <iostream>
using namespace std;

int main()
{
    int l1, l2;
    cout << "Enter size of both arrays: ";
    cin >> l1;
    cin >> l2;

    int arr1[l1], arr2[l2];
    unordered_set<int> s1, un, inter;

    cout << "Enter elements of array 1: ";
    for (int i = 0; i < l1; i++)
    {
        cin >> arr1[i];
        un.insert(arr1[i]);
        s1.insert(arr1[i]);
    }

    cout << "Enter elements of array 2: ";
    for (int i = 0; i < l2; i++)
    {
        cin >> arr2[i];
        un.insert(arr2[i]);
        if (s1.find(arr2[i]) != s1.end())
            inter.insert(arr2[i]);
    }

    cout << "\nUnion: ";
    for (int i : un)
        cout << i << " ";
    
    cout << "\nIntersection: ";
    for (int i : inter)
        cout << i << " ";
        
    return 0;
}