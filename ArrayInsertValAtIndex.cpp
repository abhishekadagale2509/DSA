#include <iostream>
using namespace std;

int main() {
    int a[6], i, index, val;
    
    // Calculate the length of the array
    int len = sizeof(a) / sizeof(a[0]);
    
    // Input array values (one less than the total length)
    cout << "Enter array values (5 elements):" << endl;
    for (i = 0; i < (len - 1); i++) {
        cin >> a[i];
    }
    
    // Display the array before adding a new element
    cout << "Before adding an element:" << endl;
    for (i = 0; i < (len - 1); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    // Input the index and the value to be inserted
    cout << "Enter the index and the value to insert: ";
    cin >> index >> val;
    
    // Shift elements to the right to make space for the new value
    for (i = (len - 2); i >= index; i--) {
        a[i + 1] = a[i];
    }
    
    // Insert the new value
    a[index] = val;
    
    // Display the array after adding the new element
    cout << "After adding the element:" << endl;
    for (i = 0; i < len; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
