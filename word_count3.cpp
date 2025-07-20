// Word Frequency with Sorted Order of Appearance (Preserve Input Order)
#include <unordered_map>
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);

    unordered_map<string, int> freq;
    vector<string> order;
    stringstream ss(line);
    string word;

    while (ss >> word)
    {
        if (freq[word] == 0)
            order.push_back(word);
        freq[word]++;
    }

    cout << "\nFrequency of Words\n";
    for (string x : order)
    {
        cout << x << ": " << freq[x] <<endl;
    }
}