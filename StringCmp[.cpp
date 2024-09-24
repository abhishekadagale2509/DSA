/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[90],ch1[90];

    cout<<"enter char val";
    cin.getline(ch,90);
    cout<<"enter char1 val";
    cin.getline(ch1,90);
    int result=strcmp(ch,ch1);
    if(!result){
        cout<<"string are equal";

    }else{
        cout<<"string not equl";
    }



}*/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char ch[90], ch1[90];

    cout << "Enter first string: ";
    cin.getline(ch, 90);
    
    cout << "Enter second string: ";
    cin.getline(ch1, 90);

    int result = strcmp(ch, ch1);  // Compare the two strings

    if (result == 0) {
        cout << "Strings are equal" << endl;
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}
