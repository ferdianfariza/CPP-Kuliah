#include <iostream>
using namespace std;

// Ferdian Nur Fariza
// A11.2023.15074
// A11.4205

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

bool linearSearchSentinel(int k, int n, int a[])
{
    a[n] = k;
    int i = 0;

    while (true)
    {
        if (a[i] == k)
        {
            break;
        }
        i++;

        if (i >= n)
        {
            break;
        }
    }

    return i < n;
}
int main()
{
    // array
    int arr[] = {12, 15, 20, 50, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    cout << "Array : ";
    printArray(arr, size);

    // input
    int input1;
    cout << "1. Mau cari apa? : ";
    cin >> input1;

    // output
    if (linearSearchSentinel(input1, size, arr))
    {
        cout << "User Input: True" << endl;
    }
    else
    {
        cout << "User Input: False" << endl
             << endl;
    }
    return 0;
}
