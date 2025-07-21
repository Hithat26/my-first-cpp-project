// Find Common Elements Between Two Arrays Using unordered_set
#include <unordered_set>
#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    unordered_set<int> s1, s2, common;

    cout << "Enter the length of both the sets: ";
    cin >> size1;
    cin >> size2;

    cout << "Enter elements of Set 1: ";
    for(int i = 0; i < size1; i++)
    {
        int temp;
        cin >> temp;
        s1.insert(temp);
    }

    cout << "Enter elements of Set 2: ";
    for(int i = 0; i < size2; i++)
    {
        int temp;
        cin >> temp;
        s2.insert(temp);
    }

    for (int c1 : s1)
    {
        for (int c2 : s2)
        {
            if (c1 == c2)
            {
                common.insert(c1);
            }
        }
    }

    cout << "Common Elements: ";
    for (int i : common)
        cout << i << " ";
    cout << endl;
    return 0;
}