#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[50];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int distinct = 0;
    for (int i=0; i<n;i++) {
        bool isdistinct=true;
        for (int j = 0; j < i; j++) {
            if (arr[i]==arr[j]) {
                isdistinct=false;
                break;
            }
        }
        if (isdistinct) distinct++;
    }

    cout << "Total distinct elements: " << distinct << endl;

    return 0;
}
