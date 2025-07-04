//Maximum element in the Array
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of Array N: ";
    cin >> n; 
    int nums[n];

    cout << "Enter elements of the Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int max = nums[0];
    for (int i = 0; i < n; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }

    cout << "Max = " << max << endl;
    return 0;
}