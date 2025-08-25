#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = 8;

    int left = 0, right = n - 2;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == mid + 1)
            left = mid + 1;
        else
            right = mid - 1;
    }

    cout << "Missing Number (Binary): " << left + 1;
    return 0;
}
