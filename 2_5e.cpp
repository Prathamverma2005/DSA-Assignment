#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int arr[10][10];

    cout << "Enter elements for matrix:\n";
    for (int i=0; i<n; i++) {
        for (int j=i; j<n; j++) {
            cin >>arr[i][j];
            if (i!=j) {
                arr[j][i]=arr[i][j]; 
                }
        }
    }

    cout << "\nSymetric Matrix:\n";
    for (int i=0;i<n;i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}
