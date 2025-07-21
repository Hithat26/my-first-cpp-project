// Decode a Message Using Character Mapping
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of letters to encode: ";
    cin >> n;
    unordered_map<char, char> key;
    cout << "Enter \nencoded_char original_char\n";
    for (int i = 0; i < n; i++)
    {
        char encode, original;
        cin >> encode;
        cin >> original;
        key[encode] = original;
    }

    string word;
    cout << "Enter a word: ";
    cin >> word;

    for (char ch : word)
    {
        cout << key[ch];
    }
    return 0;
}