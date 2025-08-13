/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the value of num1 and num2:\n";
    cin >> num1 >> num2;

    int *n1ptr = &num1;
    int *n2ptr = &num2;

    int diff;
    if (*n1ptr > *n2ptr)
    {
        diff = *n1ptr - *n2ptr;
    }
    else
    {
        diff = *n2ptr - *n1ptr;
    }

    cout << "The difference is: " << diff;

    int sum = *n1ptr + *n2ptr;
    cout << "\nThe sum is: " << sum;

    return 0;
}

/* output for this code

Enter the value of num1 and num2:
10 20 
The difference is: 10
The sum is: 30

*/  
