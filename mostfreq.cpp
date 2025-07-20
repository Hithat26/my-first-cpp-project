// Find the Most Frequent Character in a String
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
    
    char most_freq;
    int max_freq = 0;
    for (auto p : freq)
    {
        if(p.second > max_freq)
        {
            most_freq = p.first;
            max_freq = p.second;
        }
    }

    cout << "Most Frequent character : " << most_freq <<endl;
    cout << "Frequency : " << max_freq << endl;
    return 0;
}