/*#include<iostream>
using namespace std;
void test(int *x){
    for(int i=0;i<5;i++){
        x[i]=x[i]+10;
        
    }

}
int main(){
    int a[]={10,20,30,40,50};
    test(a);
    cout<<"display val"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}*/
#include <iostream>
using namespace std;

void test(int* x) {
    for (int i = 0; i < 5; i++) {
        x[i] = x[i] + 10;
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    test(a);
    cout << "Display values: ";
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
