#include <iostream>
using namespace std;

int main() {
    int a[5], i, j;
    
    // Input array values
    cout << "Enter 5 array values: ";
    for (i = 0; i < 5; i++) {
        cin >> a[i];
    }
    
    // Display the original array
    cout << "Original array values: ";
    for (i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // Bubble sort algorithm to sort the array in ascending order
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                // Swap a[i] and a[j]
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    // Display the sorted array
    cout << "Sorted array values: ";
    for (i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
