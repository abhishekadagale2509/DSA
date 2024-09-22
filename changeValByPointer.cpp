#include<iostream>
using namespace std;
int* test(int *x){
    for(int i=0;i<5;i++){
        x[i]=x[i]+10;
        
    }return x;

}
int main(){
    int a[]={10,20,30,40,50};
    //test(a);
    int *ptr=test(a);
    *(ptr+2)=500;
    cout<<"display val"<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}