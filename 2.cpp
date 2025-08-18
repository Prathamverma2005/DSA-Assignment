#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cout << "Enter no. elements of array : ";
    cin >> n;
    int arr[n];
    cout << "Enter elements of array : ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Output array is : ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (k = j; k < n; k++) {
                    arr[k] = arr[k + 1];
                }
                j = j - 1;
                n = n - 1;
            }
        }
    }

    cout << endl << "Reduced array is : ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}