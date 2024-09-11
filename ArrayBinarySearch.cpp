#include<iostream>
using namespace std;

int main() {
    int a[10], i, skey, mid, r, l = 0, flag = 0;
    
    // Input array values
    cout << "Enter array values (sorted): " << endl;
    int len = sizeof(a) / sizeof(a[0]);

    for (i = 0; i < len; i++) {
        cin >> a[i];
    }

    // Input the value to search
    cout << "Enter the search key: ";
    cin >> skey;

    // Initialize the right boundary
    r = len - 1;

    // Binary search loop
    while (l <= r) {
        mid = l + (r - l) / 2;  // Calculate the middle index

        if (a[mid] == skey) {  // Value found
            flag = 1;
            break;
        } else if (a[mid] < skey) {
            l = mid + 1;  // Search the right half
        } else {
            r = mid - 1;  // Search the left half
        }
    }

    // Output the result
    if (flag) {
        cout << "Value found at index " << mid << endl;
    } else {
        cout << "Value not found" << endl;
    }

    return 0;
}
