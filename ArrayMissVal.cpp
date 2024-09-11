#include <iostream>
using namespace std;

int main() {
    int a[5], i, j, dif;

    // Input array values
    cout << "Enter array values: ";
    int len = sizeof(a) / sizeof(a[0]);
    for (i = 0; i < len; i++) {
        cin >> a[i];
    }

    // Display the array before finding missing values
    cout << "Array values: ";
    for (i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    // Find and display missing values
    cout << "Missing values: ";
    for (i = 0; i < len - 1; i++) {  // Check until the second last element
        dif = a[i + 1] - a[i];

        if (dif > 1) {
            for (j = a[i] + 1; j < a[i + 1]; j++) {
                cout << j << " ";  // Print missing values between a[i] and a[i+1]
            }
        }
    }
    cout << endl;

    return 0;
}
