/*#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char ch[90];
    cout<<"enter str val:"<<endl;
    cin.getline(ch,90);
    cout<<"before val is :"<<ch<<endl;
    int len,mid,start=0,end;
    len=strlen(ch);
    mid=len/2;
    end=len-1;
    for(start=0;start<mid;start++){
        char temp=ch[start];
        ch[start]=ch[end];
        ch[end]=temp;

    }
    cout<<"aft val is"<<ch;
}
*/
#include<iostream>
#include<cstring>
using namespace std;

int main() {
    char ch[90];
    cout << "Enter string value: " << endl;
    cin.getline(ch, 90);

    cout << "Before reverse: " << ch << endl;

    int len = strlen(ch);
    int mid = len / 2;
    int end = len - 1;

    // Reverse the string by swapping characters from start to end
    for (int start = 0; start < mid; start++) {
        char temp = ch[start];
        ch[start] = ch[end];
        ch[end] = temp;
        end--;  // Decrement end to move towards the center
    }

    cout << "After reverse: " << ch << endl;

    return 0;
}
