#include <iostream>
using namespace std;
 int main () {
    int i,a,n,b,p=1,c=0;
    cout<< "Enter the number: ";
    cin>> n;
    a=n;
    for (i=1;a!=0;i++) {
        b=a%2;
        a=a/2;
        c+=b*p;
        p*=10;
         
    }
    cout<< c;
    return 0;
 }