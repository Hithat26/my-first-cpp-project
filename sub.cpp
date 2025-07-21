// Check if All Characters of One String Are Present in Another (Ignoring Frequency)
#include <unordered_set>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "First Word: ";
    cin >> s1;
    cout << "Second Word: ";
    cin >> s2;

    unordered_set<char> letters;
    for (char ch : s2)
        letters.insert(tolower(ch));
    
    for (char ch : s1)
    {
        if (letters.find(tolower(ch)) == letters.end())
        {
            cout << "Not all characters present" << endl;
            return 0;
        }
    }
    cout << "All characters present" << endl;
    return 0;
}