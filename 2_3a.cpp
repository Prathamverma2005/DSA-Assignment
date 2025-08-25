#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8}; // Missing 5
    int n = 8;

    for (int i=0;i<n-1;i++) {
        if (arr[i] !=i+1) {
            cout << "Missing Number: " << i + 1;
            return 0;
        }
    }

    cout << "Missing Number: " << n;
    return 0;
}
