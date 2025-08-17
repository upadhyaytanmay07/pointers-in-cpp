/* Tanmay Upadhyay
PRN 24070123120
ENTC B2
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char a[6]="tenet";
    char *aptr=&a[0];
    char *aptr1=&a[4];
    int count=0;
    for (int i=0;i<=sizeof(a)-1; i++)
    {
        if (*aptr==*aptr1)
        {
            count++;
        }
        aptr++;
        aptr1--;
    }
    cout<<"Entered string: "<<a<<endl;
    if (count==sizeof(a))
    {
        cout<<"String is a palindrome";
    }
    else
    {
        cout<<"String is not a palindrome";
    }
    
    return 0;
}

/* Ouput for this code
Entered string: madam
String is a palindrome
*/
