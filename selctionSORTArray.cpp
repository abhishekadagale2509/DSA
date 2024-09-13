#include <iostream>
using namespace std;

int main() {
    int a[5], i, j, min_ind;
    int len = sizeof(a) / sizeof(a[0]); // Length of the array
    
    // Input array values
    cout << "Enter 5 array values: ";
    for (i = 0; i < len; i++) {
        cin >> a[i];
    }
    
    // Display the original array
    cout << "Original array values: ";
    for (i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // Selection Sort Algorithm
    for (i = 0; i < len - 1; i++) {
        min_ind = i; // Set the current index as minimum
        
        // Find the minimum element in the remaining unsorted part of the array
        for (j = i + 1; j < len; j++) {
            if (a[j] < a[min_ind]) {
                min_ind = j;
            }
        }
        
        // Swap the found minimum element with the current element
        if (min_ind != i) {
            int temp = a[i];
            a[i] = a[min_ind];
            a[min_ind] = temp;
        }
    }
    
    // Display the sorted array
    cout << "Sorted array values: ";
    for (i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
