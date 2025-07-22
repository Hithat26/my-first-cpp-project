// Find the First Non-Repeating Character in a String
#include <string>
#include <map>
#include <iostream>
using namespace std;

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);

    map<char, int> freq;
    for (char ch : line)
    {
        if (ch != ' ')
            freq[tolower(ch)]++;
    }

    for (char ch : line)
    {
        if (freq[tolower(ch)] == 1)
        {
            cout << (char)tolower(ch) << " is the first non-repeating character." << endl;
            return 0;
        }
    }
    cout << "No non-repeating characters." << endl;
    return 0;
}