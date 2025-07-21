// Check if Two Strings are Isomorphic Using Maps
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter two words: ";
    cin >> s1;
    cin >> s2;
    if (s1.length() != s2.length())
    {
        cout << "Not Isomorphic" << endl;
        return 0;
    }

    unordered_map<char, char> map1, map2;
    int length = s1.length();

    for (int i = 0; i < length; i++)
    {
        char c1 = s1[i];
        char c2 = s2[i];

        if (map1.count(c1))
        {
            if(map1[c1] != c2)
            {
                cout << "Not Isomorphic" << endl;
                return 0;
            }
        }
        else 
        {   
            map1[c1] = c2;
        }

        if (map2.count(c2))
        {
            if(map2[c2] != c1)
            {
                cout << "Not Isomorphic" << endl;
                return 0;
            }
        }
        else 
        {   
            map2[c2] = c1;
        }
    }

    cout << "Isomorphic" << endl;
    return 0;
}