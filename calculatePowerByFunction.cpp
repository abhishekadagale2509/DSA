/*#include<iostream>
using namespace std;
int main(){
    void power(int,int);
    int base,index,p;
    cout<<"enter base and index";
    cin>>base>>index;
    power(base,index);
}
void power(int base,int index){
    int p=1;
    for(int i=1;i<=index;i++){
        p=p*base;

    }
    cout<<"power is "<<p;
}*/#include<iostream>
using namespace std;

void power(int, int);  // Function declaration

int main() {
    int base, index;
    cout << "Enter base and index: ";
    cin >> base >> index;
    power(base, index);  // Call the power function
    return 0;
}

void power(int base, int index) {  // Function definition
    int p = 1;
    for(int i = 1; i <= index; i++) {
        p *= base;  // p = p * base
    }
    cout << "Power is: " << p << endl;
}
