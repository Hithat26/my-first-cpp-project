// Frequency Map with Sorted Keys (Use unordered_map + vector)
#include <unordered_map>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    unordered_map<int, int> data;
    cout << "Enter all elements" << endl;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        data[temp]++;
    }

    vector<int> keys;
    for (auto x : data)
    {
        keys.push_back(x.first);
    }

    sort (keys.begin(), keys.end());

    for (int key : keys)
    {
        cout << key << ": " << data[key] << endl;
    }

    return 0;
}