#include<iostream>
using namespace std;

int getPer(int[], int);

int main()
{
    int sub[6];
    cout << "Enter the values for 6 subjects: ";
    
    for(int i = 0; i < 6; i++){
        cin >> sub[i];  // Input values into the array
    }

    int per = getPer(sub, 6);  // Passing array and its size
    cout << "Percentage: " << per << "%" << endl;

    return 0;
}

int getPer(int sub[], int size)
{
    int agg = 0;
    for(int i = 0; i < size; i++){
        agg += sub[i];  // Summing up array values
    }

    return agg / size;  // Return average
}
