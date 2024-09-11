#include<iostream>
using namespace std;
int main(){
    int a[5],skey,i,flag=0,j;
    cout<<"enter array val"<<endl;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    cout<<"before val delete"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
    cout<<"enter search val"<<endl;
    cin>>skey;
    for(int i=0;i<5;i++){
        if(a[i]==skey){
            flag=1;
            break;
        }
    }
    if(flag){
        for(j=i;j<5;j++){
            a[j]=a[j+1];

        }
    }
else
    {
        cout<<"val not found"<<endl;
    }

cout<<"after delet val"<<endl;
for(int i=0;i<4;i++){
    cout<<a[i];
}

}