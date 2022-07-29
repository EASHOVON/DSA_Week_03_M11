#include <bits/stdc++.h>
using namespace std;

// Bubble Sort program with modification

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

    // Bubble Sort Implementation
    for (int i = 1; i < n; i++)
    {
        cout << "Iteration : " << i << endl;
        // Redundent Modification
        for (int j = 0; j < n - i; j++)
        {
            // Assending order
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
            printArray(arr, n);
        }
    }

    cout << "After Sort: ";
    printArray(arr, n);
    cout << endl;
    return 0;
}