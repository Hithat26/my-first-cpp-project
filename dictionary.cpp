// Build a Reverse Dictionary (Value to Keys Mapping)
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Number of Entries: ";
    cin >> n;

    unordered_map<string, vector<string>> dictionary;
    for (int i = 0; i < n; i++)
    {
        string word;
        string category;
        cin >> word;
        cin >> category;
        dictionary[category].push_back(word);
    }

    cout << "\n~Dictionary~\n";
    for(auto p : dictionary)
    {
        cout << p.first << ": ";
        for (auto x : p.second)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}