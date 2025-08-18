#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows and columns of matrix: ";
    cin >> m >> n;
    int A[m][n];

    cout<<"Enter elements of matrix:" <<endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    cout<<"Matrix is:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"\nSum of each row:"<< endl;
    for (int i = 0; i < m; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += A[i][j];
        }
        cout<<"Row " << i + 1 <<" = " << rowSum << endl;
    }

    cout <<"\nSum of each column:" << endl;
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < m; i++) {
            colSum += A[i][j];
        }
        cout << "Column "<< j + 1 <<" = " <<colSum<<endl;
    }

    return 0;
}