/*#include<iostream>
using namespace std;
 int r=0;
 int getRev(int no)
{
  int result;
    while(no!=0){
        int rem=no%10;
        no=no/10;
        r=r*10+rem;
       return  getRev(no);

    }
    return r;
}
int main(){
    int no;
    cout<<"enter no";
    cin>>no;
    int result=getRev(no);
    cout<<result;
    
    
}
 
*/
#include<iostream>
using namespace std;

int r = 0;

int getRev(int no) {
    if (no == 0)
        return r;
    int rem = no % 10;
    r = r * 10 + rem;
    return getRev(no / 10);  // Recursive call with reduced number
}

int main() {
    int no;
    cout << "Enter number: ";
    cin >> no;
    int result = getRev(no);
    cout << "Reversed number: " << result;
    return 0;
}
