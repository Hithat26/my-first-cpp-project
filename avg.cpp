//Calculate sum and average
#include <iostream>
#include <iomanip>
using namespace std;

int arraySum(int arr[], int size);
double arrayAvg(int arr[], int size);

int main() {
    int n;
    cout << "Enter Size of Array N: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements of the array:" <<endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Sum = " << arraySum(arr, n) <<endl;
    cout << fixed << setprecision(2);
    cout << "Avg = " << arrayAvg(arr, n) <<endl;
    
    return 0;
}

int arraySum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

double arrayAvg(int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum / size;
}