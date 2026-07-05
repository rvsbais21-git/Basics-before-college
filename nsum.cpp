#include <iostream>
using namespace std;
int main () {
    int a,i,sum=0;
    cout<< "Enter number: ";
    cin>> a;
    for (i=0;i<=a;i++) {
        sum=sum+i;
    }
    cout << "Sum is: " << sum <<endl;
    return 0;
}