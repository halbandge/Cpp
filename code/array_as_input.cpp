#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Static array with size determined at runtime
    int arr[n];

    // Input array elements
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // Display the first 5 elements or all elements if n < 5
    cout << "First 5 elements (or all if less than 5): ";
    for (int i = 0; i < n && i < 5; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Reversing and displaying the array
    cout << "Reversed array: ";
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
