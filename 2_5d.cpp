#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int arr[10][10];

    cout << "Enter the elements of the upper trinagular matrix:\n";
    for (int i = 0; i< n; i++) {
        for (int j =0; j<i; j++) {
            arr[i][j]=0;
        }
        for (int j = i; j< n; j++) {
            cin >> arr[i][j];
        }
    }

    cout << "\nUpper Triangular Matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
