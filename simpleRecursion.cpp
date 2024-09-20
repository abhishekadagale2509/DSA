#include<iostream>
using namespace std;

void show(int);  // Use 'void' since the function doesn't return anything

int main(){
    show(5);  // Call the function with the value 5
    return 0;
}

void show(int x){
    if(x == 0)  //x!==0 Base case to stop recursion
        return;

    cout << "Good morning" << endl;
    show(--x);  // Decrement x before the next recursive call
}
