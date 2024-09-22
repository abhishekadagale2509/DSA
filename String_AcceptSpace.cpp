#include<iostream>
using namespace std;

int main() {
    char name[90];
    cout << "Enter msg: ";
    cin.getline(name, 90);  // Safely read up to 90 characters including spaces

    //in c lang gets(name);
    cout << "Msg is: " << name << endl;
    
    return 0;
}
