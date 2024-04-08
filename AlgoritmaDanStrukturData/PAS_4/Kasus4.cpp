#include <iostream>
using namespace std;

// Ferdian Nur Fariza
// A11.2023.15074
// A11.4205

void printArray(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
bool binarySearch(int k, int n, int a[])
{
    bool Found = false;
    int left = 0;
    int right = n - 1;
    while (left <= right && !Found)
    {
        int mid = (left + right) / 2;
        if (a[mid] == k)
        {
            Found = true;
        }
        else if (a[mid] > k)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return Found;
}
int main()
{
    // array
    int arr[] = {15, 12, 50, 20, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array 1 : ";
    printArray(arr, size);

    int input3;
    cout << "1. Mau Cari apa? : ";
    cin >> input3;
    binarySearch(input3, size, arr);

    if (binarySearch(input3, size, arr) == 1)
    {
        cout << "User Input: True" << endl;
    }
    else
    {
        cout << "User Input: False" << endl;
    }
    // array 2
    int arr2[] = {12, 15, 20, 50, 100};
    cout << "Array 2 : ";
    printArray(arr2, size);

    int input4;
    cout << "2. Mau Cari apa? : ";
    cin >> input4;
    binarySearch(input4, size, arr2);

    if (binarySearch(input4, size, arr2) == 1)
    {
        cout << "User Input: True" << endl;
    }
    else
    {
        cout << "User Input: False" << endl;
    }

    /*
        Hasil Kedua search berbeda karena kondisi dari while adalah a<b
        dimana integer kanan harus lebih besar daripada kiri jadi hasilnya
        adalah false, dan tidak menghasilkan output yang tepat
    */

    return 0;
}