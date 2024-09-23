#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char ch[90];
    cout<<"enter str val";
    cin.getline(ch,90);
    strrev(ch);
    cout<<"after rev val is :"<<ch;
    
    
}