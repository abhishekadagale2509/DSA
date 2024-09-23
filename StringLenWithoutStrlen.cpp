/*#include<iostream>
#include<cstring>
using namespace std;
int main()
{

    char name[90];
    cout<<"enter str val";
    cin.getline(name,90);
    int count=0;
    while(name[count]!='\0'){
        count++;

    }
    cout<<"cout is"<<count;
    return 0;
}*/
#include<iostream>
using namespace std;

int main() {
    char name[90];
    cout << "Enter string value: ";
    cin.getline(name, 90);

    int count = 0;

    // Counting the number of characters in the string
    while (name[count] != '\0') {
        count++;
    }

    cout << "Count is: " << count << endl;

    return 0;
}
