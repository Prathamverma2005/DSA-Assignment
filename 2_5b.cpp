#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    int low[n-1], mid[n], up[n-1];

    cout << "Lower diag: ";
    for (int i=0;i<n-1;i++) {
        cin>>low[i];
    }

    cout<<"Main diag: ";
    for (int i = 0; i < n; i++) {
        cin>>mid[i];
    }

    cout<<"Upper diag: ";
    for (int i= 0; i <n-1;i++) {
        cin>>up[i];
    }

    for (int i =0; i < n; i++) {
        for (int j= 0; j < n; j++) {
            if (i ==j) {
                cout << mid[i] << " ";
            } else if (i ==j+1) {
                cout << low[j] << " ";
            } else if (j==i+1) {
                cout << up[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}
