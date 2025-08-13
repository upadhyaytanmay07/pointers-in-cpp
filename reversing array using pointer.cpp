/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;

int main() 
{
    int size = 7;
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "Initial array:\n";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }

    // Reverse using pointers
    for (int i = 0; i < size / 2; i++) 
    {
        int *start = arr + i;
        int *end = arr + size - 1 - i;

        int temp = *start;
        *start = *end;
        *end = temp;
    }

    cout << "\nReversed array:\n";
    for (int i = 0; i < size; i++) 
    {
        cout << arr[i] << " ";
    }

    return 0;
}

/* output for this code

Initial array:
1 2 3 4 5 6 7 
Reversed array:
7 6 5 4 3 2 1

*/
