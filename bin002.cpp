#include <iostream>
using namespace std;

int b2d(int a) {
    int i=1,p=1,s=0;
    for (i=1;a!=0;i++) {
        int b= a%10;
    a/=10;
    s+=b*p;
        p*=2;
}
    return s;
}

int main () {
    int n;
    cout<< "Enter the number: ";
    cin>> n;
    cout << b2d(n);
    return 0;
}