#include <iostream>
using namespace std;

int main()
{
    int a[5], i, val, choice, rear = -1, front = 0;
    int max = sizeof(a) / sizeof(a[0]);

    do
    {
        cout << "\n1: Insert data" << endl;
        cout << "2: Delete data" << endl;
        cout << "3: Show data" << endl;
        cout << "4: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            if (rear == max - 1)
            {
                cout << "Queue is full" << endl;
            }
            else
            {
                rear = rear + 1;
                cout << "Enter value: ";
                cin >> val;
                a[rear] = val;
                cout << "Inserted: " << val << endl;
            }
            break;

        case 2:
            if ((rear == -1 && front == 0) || (front == rear + 1))
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                val = a[front];
                front = front + 1;
                cout << "Deleted value: " << val << endl;
            }
            break;

        case 3:
            if ((rear == -1 && front == 0) || (front == rear + 1))
            {
                cout << "Queue is empty" << endl;
            }
            else
            {
                cout << "Queue contents: ";
                for (i = front; i <= rear; i++)
                {
                    cout << a[i] << " ";
                }
                cout << endl;
            }
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "You selected the wrong choice" << endl;
            break;
        }
    } while (choice != 4);

    return 0;
}
