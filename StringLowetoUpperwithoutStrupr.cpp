/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char c[90];
    cout<<"enter str  val"<<endl;
    cin.getline(c,90);
    cout<<"before con:"<<c<<endl;
    cout<<"after con"<<endl;
   int  count=0;
   while(c[count]!='\0'){
    if(c[count]>=97&&c[count]<=122){
        c[count]=c[count]-32;
    }count++;
   }
   cout<<"after con str is:"<<c<<endl;
   



}*/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char c[90];
    cout << "Enter string value: ";
    cin.getline(c, 90);

    cout << "Before conversion: " << c << endl;

    int count = 0;
    while (c[count] != '\0') {
        // Convert lowercase letters (ASCII 97-122) to uppercase by subtracting 32
        if (c[count] >= 97 && c[count] <= 122) {
            c[count] = c[count] - 32;
        }
        count++;  // Increment count to move to the next character
    }

    cout << "After conversion, string is: " << c << endl;

    return 0;
}
