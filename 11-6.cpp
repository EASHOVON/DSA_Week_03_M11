#include <bits/stdc++.h>
using namespace std;

// Insertion Sort Implementation
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Before Sort: ";
    printArray(arr, n);
    cout << endl;

    // Implement Insertion Sort
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        cout << endl
             << "i : " << i << ", Key : " << key << endl;
        int j = i - 1;
        while (arr[j] > key && j >= 0)
        {
            cout << "j :" << j << endl;
            arr[j + 1] = arr[j];
            printArray(arr, n);
            j--;
        }
        arr[j + 1] = key;
        printArray(arr, n);
    }
    cout << endl;

    cout << "After Sort: ";
    printArray(arr, n);
    cout << endl;
    return 0;
}