#include<iostream>
using namespace std;
int main(){
    int a[5],sum=0,i;
    cout<<"enter arr values";
    for(i=0;i<5;i++){
        cin>>a[i];

    }
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
cout<<"sum is "<<sum;
}