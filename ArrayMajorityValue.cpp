#include<iostream>
using namespace std;

int main() {
    int a[10], sval, i, count = 0;
    
    // Input array values
    cout << "Enter 10 array values: ";
    for (i = 0; i < 10; i++) {
        cin >> a[i];
    }

    // Display array values
    cout << "Array values are: ";
    for (i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Input the search value
    cout << "Enter the value to search: ";
    cin >> sval;

    // Count occurrences of search value in the array
    for (i = 0; i < 10; i++) {
        if (a[i] == sval) {
            count++;
        }
    }

    // Calculate the majority condition
    int len = sizeof(a) / sizeof(a[0]);
    int mid = len / 2;

    // Check if the search value is a majority
    if (count > mid) {
        cout << sval << " is the majority value" << endl;
    } else {
        cout << sval << " is not the majority value" << endl;
    }

    return 0;
}
