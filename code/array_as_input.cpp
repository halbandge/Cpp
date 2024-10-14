#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements:";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i += 1)
        cin >> arr[i];

    return 0;
}