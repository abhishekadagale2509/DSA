#include<iostream>
using namespace std;

void add(int, int);  // Function declaration

int main(){
    int a, b;
    cout << "Enter two values: ";
    cin >> a >> b;
    add(a, b);  // Call the add function
    return 0;
}

void add(int a, int b){  // Function definition
    cout << "The sum is: " << a + b << endl;
}
