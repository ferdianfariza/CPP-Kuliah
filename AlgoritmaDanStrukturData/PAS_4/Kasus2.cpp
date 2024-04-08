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

int linearSearch(int k, int n, int A[])
{
    for (int i = 0; i < n; i++)
    {
        if (A[i] == k)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 52, 104, 29};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << endl;
    cout << "Array : ";
    printArray(arr, size);

    int input1;
    cout << "1. Mau cari apa? (12, 52,104,29): ";
    cin >> input1;

    int foundIndex = linearSearch(input1, size, arr);

    if (foundIndex != -1)
    {
        cout << "   User Input \t: True" << endl;
        cout << "   Elemen " << input1 << " \t: indeks ke-" << foundIndex << endl
             << endl;
    }
    else
    {
        cout << "   User Input \t: False" << endl
             << endl;
    }

    return 0;
}
