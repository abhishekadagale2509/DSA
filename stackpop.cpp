/*#include<iostream>
using namespace std;
int main(){
    int a[5],top=-1,i;

    if(top==-1){
        cout<<"stack is underflow";

    }else{
        int val=a[top];
        top=top-1;
        cout<<"pop val is "<<val;

    }
}*/
#include<iostream>
using namespace std;

int main() {
    int a[5], top = -1, i;
    int choice, val;

    while (true) {
        cout << "\n1. Push\n2. Pop\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (top == 4) {
                    cout << "Stack is overflow" << endl;
                } else {
                    cout << "Enter value to push: ";
                    cin >> val;
                    top++;
                    a[top] = val;
                    cout << "Pushed value: " << val << endl;
                }
                break;

            case 2:
                if (top == -1) {
                    cout << "Stack is underflow" << endl;
                } else {
                    val = a[top];
                    top--;
                    cout << "Popped value is: " << val << endl;
                }
                break;

            case 3:
                exit(0);

            default:
                cout << "Invalid choice" << endl;
        }
    }

    return 0;
}


