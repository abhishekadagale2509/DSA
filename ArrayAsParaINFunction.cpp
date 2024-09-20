#include<iostream>
using namespace std;

int getPer(int, int, int, int, int, int);

int main(){
    int s1, s2, s3, s4, s5, s6, per;
    cout << "Enter the values of 6 subjects: ";
    cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6;
    
    per = getPer(s1, s2, s3, s4, s5, s6);
    cout << "Percentage: " << per << "%" << endl;

    return 0;
}

int getPer(int s1, int s2, int s3, int s4, int s5, int s6){
    int agg = (s1 + s2 + s3 + s4 + s5 + s6);  // Sum of all subjects
    return (agg / 6);  // Divide by total number of subjects to get the average
}
