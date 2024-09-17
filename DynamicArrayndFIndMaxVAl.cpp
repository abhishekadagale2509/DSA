#include <iostream>
using namespace std;

int main()
{
    int *ptr, i, size, max;

    // Get the size of the array
    cout << "Enter size: ";
    cin >> size;

    // Dynamically allocate memory for the array
    ptr = new int[size];

    // Get the array values from the user
    cout << "Enter values: ";
    for (i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    // Find the maximum value
    max = ptr[0];
    for (i = 1; i < size; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }

    // Display the maximum value
    cout << "Maximum value is: " << max << endl;

    // Free the allocated memory
    delete[] ptr;

    return 0;
}










/*#include <iostream>
using namespace std;
int main()
{
    int *ptr, i, size, max;
    cout << "enter size";
    cin >> size;
    ptr = (int *)malloc(sizeof(int) * size);
    cout << "enter val";
    for (i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    max = ptr[0];
    cout << "display val";

    for (i = 0; i < size; i++)
    {
        if (ptr[i] > max)
        {
            max = ptr[i];
        }
    }
    cout<<"display val"<<max;
}*/