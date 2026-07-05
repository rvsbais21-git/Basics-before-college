#include <iostream>
using namespace std;
int main () {
    int a,i,s=0,q,n=1;
    cout<< "Enter a number: ";
    cin>> a;
     for (i=0;a>=0.1;n=1) {
        q=a%10;
        a=a/10;
        s=s+q;
        i++;
    }
    cout<< "Sum of digits is: " << s <<endl;
    return 0;
}