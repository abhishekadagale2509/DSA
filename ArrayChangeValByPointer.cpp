#include<iostream>
using namespace std;

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *ptr;
    ptr = a;
    ptr = ptr + 2;   // Move to the third element (index 2)
    *ptr = 500;      // Modify the third element value to 500
    
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";  // Print the array elements using a[i]
    }

    return 0;
}
