/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fi[90],se[90];
    cout<<"enter fi string val"<<endl;
    cin.getline(fi,90);
    cout<<"enter sec val"<<endl;
    cin.getline(se,90);
    cout<<"before concat:"<<fi<<endl;
    strcat(fi,se);
    cout<<"after concat val:"<<fi<<endl;
}*/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char fi[90], se[90];

    cout << "Enter first string: ";
    cin.getline(fi, 90);

    cout << "Enter second string: ";
    cin.getline(se, 90);

    cout << "Before concatenation: " << fi << endl;

    strcat(fi, se); // Concatenating second string to the first

    cout << "After concatenation: " << fi << endl;

    return 0;
}
