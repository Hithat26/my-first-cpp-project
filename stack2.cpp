// stack (LIFO – Last In First Out)
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <map>
using namespace std;

int main()
{
    string line;
    cout << "Enter a sentence: ";
    getline(cin, line);

    stringstream ss(line);
    string word;
    stack<string> order;
    map<string, int> freq;
    while (ss >> word)
    {
        if(freq[word] == 0)
            order.push(word);
        freq[word]++;
    }

    stack<string> rev;
    while(!order.empty())
    {
        rev.push(order.top());
        order.pop();
    }

    while(!rev.empty())
    {
        string temp = rev.top();
        cout << temp << ": " << freq[temp] << endl;
        rev.pop();
    }
}