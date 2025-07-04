//Number of vowels in a string
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int countVowels(string s);

int main () {
    string Line;
    cout << "Enter a Line: ";
    getline(cin, Line);

    cout << "Number of Vowels = " << countVowels(Line) <<endl;

    return 0;
}

int countVowels(string s)
{
    int count = 0;
    for(char c : s)
    {
        c = tolower(c); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}