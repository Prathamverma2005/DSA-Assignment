#include <iostream>
using namespace std;

int main() {
    int n, to_find;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> to_find;

    int left = 0, right = n - 1, mid,find;
    while (left <= right) {
        mid = (left + right) / 2;
        if (arr[mid] == to_find) {
            cout << "Element found at position " << mid;
            find=true;
            break;
        }
        else if (arr[mid] < to_find)
            left = mid + 1;
        else
            right = mid - 1;
    }
    if(find!=true)
    cout << "Element not found";
    return 0;
}
