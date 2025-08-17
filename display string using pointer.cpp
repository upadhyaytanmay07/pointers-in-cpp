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
    char a[7]="Tanmay";
    char *aptr=&a[0];
    cout<<"Entered string: ";
    for (int i=1; i<=sizeof(a); i++){
        cout<<*aptr;
        aptr++;
    }
    return 0;
}

/*Output
Entered string: Tanmay
*/
