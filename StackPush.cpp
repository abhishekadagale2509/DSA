#include<iostream>
using namespace std;

int main() {
    int a[5], i, val, top = -1, max;
    max = sizeof(a) / sizeof(a[0]);  // Maximum size of stack is the size of array 'a'
    
    cout << "Enter array values to initialize the stack:" << endl;
    for (i = 0; i < max; i++) {
        cin >> a[i];
        top = i;  // Updating the top with the current position after each entry
    }

    // Checking if the stack is full
    if (top == max - 1) {
        cout << "Stack overflow, can't push more elements." << endl;
    } else {
        cout << "Enter value to push onto the stack: ";
        cin >> val;
        
        top = top + 1;  // Increment the top pointer
        a[top] = val;   // Push the value onto the stack
        
        cout << "Pushed value " << val << " onto the stack." << endl;
    }

    // Displaying the updated stack
    cout << "Updated stack values:" << endl;
    for (i = 0; i <= top; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}
