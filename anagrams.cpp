// Anagram Checker Using unordered_map<char, int>
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    string a;
    cout << "Enter first word : ";
    cin >> a;

    string b;
    cout << "Enter second word : ";
    cin >> b;

    unordered_map<char, int> ma;
    for (char ch : a)
        ma[tolower(ch)]++;

    unordered_map<char, int> mb;
    for (char ch : b)
        mb[tolower(ch)]++;

    if (ma == mb)
        cout << "Anagrams" << endl;
    else
        cout << "Not Anagrams" << endl;

    return 0;
}