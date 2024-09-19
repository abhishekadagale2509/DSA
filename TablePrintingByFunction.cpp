#include<iostream>
using namespace std;

void table(int);  // Function declaration

int main(){
    int no;
    cout << "Enter a number: ";
    cin >> no;
    table(no);  // Call the table function
    return 0;
}

void table(int x){  // Function definition
    for(int i = 1; i <= 10; i++){
        cout << x << " * " << i << " = " << i * x << endl;
    }
}
