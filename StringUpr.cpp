#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char c[90];
    cout<<"enter str val";
    cin.getline(c,90);
    cout<<"before conv str is :"<<c;
    strupr(c);
    cout<<"after con";
    

}