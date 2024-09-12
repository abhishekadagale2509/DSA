#include<iostream>
using namespace std;

int main() {
    int a[5], i, choice, val, max;
    max = sizeof(a) / sizeof(a[0]);
    int top = -1;

    do {
        cout << "\n1: Insert data" << endl;
        cout << "2: Delete data" << endl;
        cout << "3: Show data" << endl;
        cout << "4: Exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to add: ";
                cin >> val;
                if (top == max - 1) {
                    cout << "Stack is overflow" << endl;
                } else {
                    top++;
                    a[top] = val;
                    cout << "Added value is: " << a[top] << endl;
                }
                break;

            case 2:
                if (top == -1) {
                    cout << "Stack is underflow" << endl;
                } else {
                    val = a[top];
                    top--;
                    cout << "Deleted value is: " << val << endl;
                }
                break;

            case 3:
                if (top == -1) {
                    cout << "Stack is empty" << endl;
                } else {
                    cout << "Stack contents: ";
                    for (i = top; i >= 0; i--) {
                        cout << a[i] << " ";
                    }
                    cout << endl;
                }
                break;

            case 4:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}
