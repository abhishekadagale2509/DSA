#include<iostream>
#include<stdlib.h>
using namespace std;

int main() {
    int *ptr, i, size;
    cout << "Enter size: ";
    cin >> size;

    // Allocate memory using malloc
    ptr = (int*)malloc(sizeof(int) * size);

    if (ptr == NULL) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    // Input values into the array
    cout << "Enter values:" << endl;
    for (i = 0; i < size; i++) {
        cin >> ptr[i];
    }

    // Display the values
    cout << "Display values:" << endl;
    for (i = 0; i < size; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;

    // Free the allocated memory
    free(ptr);

    return 0;
}
/*#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *ptr,i,size;
    cout<<"enter size";
    cin>>size;
    ptr=(int*)malloc(sizeof(int)*size);
    for(i=0;i<size;i++){
        cin>>ptr[i];
    }
    cout<<"display val";
    for(i=0;i<size;i++){
        cout<<ptr[i];
    }

}*/