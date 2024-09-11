#include <iostream>
using namespace std;

int main() {
    
    int a[5], max, i;
    
cout << "Enter array values: ";
    
    
    for (i = 0; i <5; i++) {
        cin >> a[i];
    }

    
    max = a[0];

    
    for (i = 1; i < 5; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    cout << "Max value is: " << max << endl;
    return 0;
}
