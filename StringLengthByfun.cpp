/*#include<iostream>
#include<String.h>
using namespace std;
int main()
{
    char name[90];
    cout<<"enter string val ";
    cin.getline(name,90);
    int l=strlen(name);

}*/
#include<iostream>
#include<cstring>  // Correct header for strlen
using namespace std;

int main() {
    char name[90];
    cout << "Enter string value: ";
    cin.getline(name, 90);  // Read input including spaces
    int l = strlen(name);   // Get the length of the string
    cout << "Length of the string: " << l << endl;

    return 0;  // Return 0 to indicate successful execution
}
