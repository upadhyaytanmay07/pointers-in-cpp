/* Tanmay Upadhyay
PRN 24070123120
ENTC B2 */

#include<iostream>
using namespace std;
int main()
{
    int i ;
    float f;
    double d;
    bool b = true;
    cout<<"Enter the values of the datatypes.\n";
    cout<<"Enter value of i : ";
    cin>>i;
    cout<<"\nEnter value of f : ";
    cin>>f;
    cout<<"\nEnter value of d : ";
    cin>>d;
    //cout<<"\nEnter value of b : ";
    //cin>>b;
    int *iptr;
    float *fptr;
    double *dptr;
    bool *bptr;
    iptr=&i;
    fptr=&f;
    dptr=&d;
    bptr=&b;
    cout<<"\n Display the value stored in the pointers -> \n";
    cout<<"int = "<<iptr<<endl<<"float = "<<fptr<<endl<<"double = "<<dptr<<"\n"<<"bool = "<<bptr<<endl;
    // incrementing the values 
    iptr++;
    fptr++;
    dptr++;
    bptr++;
    cout<<"displaying the incremented values of pointers : \n";
    cout<<"iptr = "<<iptr<<endl<<"fptr = "<<fptr<<endl<<"double = "<<dptr<<endl<<"bool = "<<bptr<<endl;
}

/* output for this code

Enter the values of the datatypes.
Enter value of i : 10

Enter value of f : 12.2

Enter value of d : 2322


 Display the value stored in the pointers ->
int = 0x61fefc
float = 0x61fef8
double = 0x61fef0
bool = 0x61feef
displaying the incremented values of pointers :
iptr = 0x61ff00
fptr = 0x61fefc
double = 0x61fef8
bool = 0x61fef0

*/
