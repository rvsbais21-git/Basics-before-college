#include <iostream>
using namespace std;

void issmall(double a, double b) {

    if (a>b) {
        cout<< b << " is smaller.";
    } else {
        cout<< a << " is smaller.";
    }
}

int main () {
    double c,d;
cout<< "Enter 1: ";
cin>>c;
cout<< "Enter 2: ";
cin>>d;
issmall (c,d);

}