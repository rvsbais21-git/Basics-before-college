#include <iostream>
using namespace std;
int main () {
    int a,i,sum=1;
    cout << "Enter number: ";
    cin >> a;
    for (i=1;i<=10;i++) {
        cout<< i << "x" << a << "=" << a*i << endl;
    }
    return 0;
}