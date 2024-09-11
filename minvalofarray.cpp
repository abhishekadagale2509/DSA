#include<iostream>
using namespace std;
int main(){
    int a[5],i,min;
    cout<<"enter arr val";
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    min=a[0];
    for(int i=1;i<5;i++){
        if(min>a[i]){
            min=a[i];

        }
    }
    cout<<"min val is "<<min;
}