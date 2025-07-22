// Find the First Repeating Character in a String
#include <string>
#include <unordered_set>
#include <iostream>
using namespace std;

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);

    unordered_set<char> letters;
    for (char ch : line)
    {
        if (ch != ' ')
        {
            if (letters.find(tolower(ch)) != letters.end())
            {
                cout << ch << " is the first repeating letter." << endl;
                return 0;
            }
            else
            {
                letters.insert(tolower(ch));
            }
        }
    }
    cout << "No repeating letters" << endl;
    return 0;
}