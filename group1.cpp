// Group Words by Length
#include <string>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of words: ";
    cin >> n;

    map<int, vector<string>> groups;
    cout << "Enter the words:" << endl;
    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;
        groups[word.length()].push_back(word);
    }

    for (auto p : groups)
    {
        cout << p.first << ": ";
        for (auto x : p.second)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}