// Count Frequency of Characters in a String (Using unordered_map<char, int>)
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string line;
    cout << "Enter a string: ";
    getline(cin, line);

    unordered_map<char, int> freq;
    for (char ch : line)
    {
        if (ch == ' ')
            continue;
        freq[ch]++;
    }

    for (auto x : freq)
    {
        cout << x.first << ": " << x.second << endl;
    }
    
    return 0;
}