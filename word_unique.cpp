// Extract Unique Words from a Sentence using set<string>
#include <set>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);
    stringstream ss(line);
    set<string> s;

    string word;
    while ( ss >> word)
    {
        s.insert(word);
    }

    for (string x : s)
    {
        cout << x << endl;
    }
    return 0;
}