/*#include<iostream>
using namespace std;
 int p=1;
int getPower(int base,int index){
    while(index!=0){
        p=p*base;
    return getPower(base,--index);

    }
return p;

}
int main(){
    int base,index;
    cout<<"enetr base and index";
    cin>>base>>index;
    int result=getPower(base,index);
    cout<<result;
    
}
*/

#include<iostream>
using namespace std;

int getPower(int base, int index) {
    if (index == 0)  // Base case: if index becomes 0, return 1 (as base^0 is 1)
        return 1;
    
    return base * getPower(base, index - 1);  // Recursive call reducing index by 1
}

int main() {
    int base, index;
    cout << "Enter base and index: ";
    cin >> base >> index;
    
    int result = getPower(base, index);
    cout << "Result: " << result;
    
    return 0;
}
