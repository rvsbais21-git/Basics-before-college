#include <iostream>
using namespace std;
int main () {
    float a,i,sum=1;
    cout<< "Enter number: ";
    cin>> a;
    for (i=1;i<=a;i++) {
        sum=sum*i;
    }
    cout << "Factorial is: " << sum <<endl;
    return 0;
}