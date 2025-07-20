// Group Words by Their Starting Character (Alphabetically)
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
using namespace std;

int main()
{
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);

    string word;
    stringstream ss(line);
    map<char, set<string>> group;
    while (ss >> word)
    {
        group[word[0]].insert(word);
    }

    for (auto pair : group) 
    {
        cout << pair.first << ": ";
        for (auto word : pair.second) 
        {
            cout << word << " ";
        }
        cout << endl;
    }
    return 0;
}