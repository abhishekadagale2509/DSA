#include<iostream>
using namespace std;

int main() {
    int a[5] = {1, 2, 3, 4, 5};
    int i;
    int *ptr;
    ptr = a;
    
    for (i = 0; i < 5; i++) {
        cout << *ptr << " ";  // Corrected output statement
        ptr++;
    }
    
    return 0;
}
