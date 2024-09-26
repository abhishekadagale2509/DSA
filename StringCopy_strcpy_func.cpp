/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char f[90],s[90];
    cout<<"enter first val"<<endl;
    cin.getline(f,90);
     cout<<"enter second val"<<endl;
    cin.getline(s,90);
    cout<<"before copy val is :"<<f<<endl;
    strcpy(f,s);
    cout<<"after copy val is:"<<f<<endl;
    
}*/#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char f[90], s[90];

    cout << "Enter first string: ";
    cin.getline(f, 90);

    cout << "Enter second string: ";
    cin.getline(s, 90);

    cout << "Before copy, first string is: " << f << endl;

    // Copy second string into the first string
    strcpy(f, s);

    cout << "After copy, first string is: " << f << endl;

    return 0;
}
