// Group Books by Authors Using unordered_multimap
#include <unordered_map>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    unordered_multimap<string, string> catalog;
    int n;
    cout << "Enter number of books: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cout << "Enter author and book name " << i + 1 << ": ";
        cin >> a;
        cin >> b;
        catalog.insert({a, b});
    }

    string find;
    cout << "Enter an Author to find: ";
    cin >> find;

    cout << "Books by " << find << endl;
    auto range = catalog.equal_range(find);
    for (auto it = range.first; it != range.second; ++it)
    {
        cout << it->second << endl;
    }

    cout << "\n--- Complete Catalog ---\n";
    for (auto x : catalog)
    {
        cout << x.first << ": " << x.second << endl;
    }

    return 0;
}