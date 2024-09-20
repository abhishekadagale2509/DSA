#include<iostream>
using namespace std;

int getMax(int[], int);  // Updated to accept the size of the array

int main(){
    int a[5];
    cout << "Enter 5 values: ";
    
    for(int i = 0; i < 5; i++){
        cin >> a[i];  // Input values into the array
    }

    int maxVal = getMax(a, 5);  // Pass array and its size to getMax
    cout << "Maximum value: " << maxVal << endl;

    return 0;
}

int getMax(int m[], int size){
    int max = m[0];  // Initialize max to the first element
    
    for(int i = 1; i < size; i++){  // Start loop from 1 since m[0] is already max
        if(m[i] > max){
            max = m[i];
        }
    }
    
    return max;  // Return the maximum value
}
