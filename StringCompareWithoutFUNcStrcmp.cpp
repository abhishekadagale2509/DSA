/*#include<iostream>
#include<cstring>
using namespace std;
int main(){

    char first[90],second[90];
    int count=0,flag=1,flen,slen,diff;
    cout<<"enter f char val";
    cin.getline(first,90);
    cout<<"enter s char val ";
    cin.getline(second,90);
    flen=strlen(first);
    slen=strlen(second);
    if(flen==slen){
        while(first[count]!='\0'){
            diff=first[count]-second[count];
            if(diff!=0){
                flag=0;
                break;
            }
            count++;
        }
        if(flag){
            cout<<"strings are equal";

        }else{
            cout<<"strings are not equal";
        }
    }
    else{
        cout<<"strings are not equal";


    }


}*/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char first[90], second[90];
    int count = 0, flag = 1, flen, slen, diff;

    cout << "Enter first string: ";
    cin.getline(first, 90);

    cout << "Enter second string: ";
    cin.getline(second, 90);

    flen = strlen(first);
    slen = strlen(second);

    if (flen == slen) {
        while (first[count] != '\0') { // Corrected condition
            diff = first[count] - second[count];
            if (diff != 0) {
                flag = 0;
                break;
            }
            count++;
        }
        if (flag) {
            cout << "Strings are equal" << endl;
        } else {
            cout << "Strings are not equal" << endl;
        }
    } else {
        cout << "Strings are not equal" << endl;
    }

    return 0;
}
