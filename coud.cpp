#include <iostream>
using namespace std;
int main () {
    //1234
    int i=0,a,n=1;
    cout << "Enter number: ";
    cin >> a;
    for (i=0;a>=0.1;n=1) {
        a=a/10;
        i++;
    }
    cout << "Number of digits: " << i <<endl;
    return 0;
}