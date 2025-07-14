// Word Frequency Counter using map<string, int>
#include <map>
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
    map<string, int> counter;

    string word;
    while (ss >> word) 
    {
        counter[word]++;
    }

    for (auto p : counter)
    {
        cout << p.first << ": " << p.second << endl;
    }
    return 0;
}